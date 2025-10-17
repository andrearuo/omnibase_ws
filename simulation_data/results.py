import os
import glob
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from scipy.interpolate import interp1d
import yaml
import matplotlib.image as mpimg
import matplotlib.lines as mlines  # per handler custom in legenda

# === Set global font ===
plt.rcParams.update({
    'font.size': 20,
    'axes.titlesize': 20,
    'axes.labelsize': 20,
    'legend.fontsize': 20,
    'xtick.labelsize': 18,
    'ytick.labelsize': 18
})

# === Folder and files ===
folder_path = "./"
all_files = glob.glob(os.path.join(folder_path, "data_user_*_operator_*.csv"))

# === Reference path ===
start_ref = np.array([19, -10])
end_ref = np.array([9, -10])

# === Function distance point-rect ===
def point_to_line_distance(p, a, b):
    pa = p - a
    ba = b - a
    proj = np.dot(pa, ba) / np.dot(ba, ba)
    proj_point = a + proj * ba
    return np.linalg.norm(p - proj_point)

# === Normalization ===
def normalize_path_progress(x, y):
    deltas = np.sqrt(np.diff(x)**2 + np.diff(y)**2)
    cumulative = np.insert(np.cumsum(deltas), 0, 0.0)
    norm = 100 * cumulative / cumulative[-1] if cumulative[-1] > 0 else cumulative
    return norm

# === Classification trajectories ===
trajectories = {"F": [], "G": [], "U": [], "CA": []}
start_points = []

for file in all_files:
    df = pd.read_csv(file)
    x = df['x_pos'].values
    y = df['y_pos'].values
    trajectory = np.vstack((x, y)).T
    start_points.append(trajectory[0])

    if "operator_F" in file and "user_3" not in file:
        trajectories["F"].append((x, y))
    elif "operator_G" in file:
        trajectories["G"].append((x, y))
    elif "operator_U" in file:
        trajectories["U"].append((x, y))
    elif "operator_CA" in file or "user_31" in file:
        trajectories["CA"].append((x, y))

# === Start middle point ===
start_points = np.array(start_points)
start_mean = np.mean(start_points, axis=0)
print(f"[INFO] Mean Start Position: {start_mean}")

# === Interpolation ===
x_vals_interp = np.linspace(0, 100, 100)
deviations = {}
mean_trajectories = {}

for op, trajs in trajectories.items():
    interpolated_devs = []
    all_x_interp = []
    all_y_interp = []
    for x, y in trajs:
        norm_progress = normalize_path_progress(x, y)
        dev = [point_to_line_distance(np.array([xi, yi]), start_ref, end_ref) for xi, yi in zip(x, y)]
        f_dev = interp1d(norm_progress, dev, kind='linear', bounds_error=False, fill_value="extrapolate")
        interp_dev = f_dev(x_vals_interp)
        interpolated_devs.append(interp_dev)

        f_x = interp1d(norm_progress, x, kind='linear', bounds_error=False, fill_value="extrapolate")
        f_y = interp1d(norm_progress, y, kind='linear', bounds_error=False, fill_value="extrapolate")
        all_x_interp.append(f_x(x_vals_interp))
        all_y_interp.append(f_y(x_vals_interp))

    if interpolated_devs:
        dev_array = np.vstack(interpolated_devs)
        deviations[op] = {
            "mean": np.nanmean(dev_array, axis=0),
            "std": np.nanstd(dev_array, axis=0)
        }
    else:
        deviations[op] = {"mean": np.array([]), "std": np.array([])}

    if all_x_interp and all_y_interp:
        mean_trajectories[op] = (
            np.nanmean(np.vstack(all_x_interp), axis=0),
            np.nanmean(np.vstack(all_y_interp), axis=0)
        )
    else:
        mean_trajectories[op] = (np.array([]), np.array([]))

# === Plot 1: Mean ± Standard Deviation ===
plt.figure(figsize=(10, 6))
for op, data in deviations.items():
    if data["mean"].size == 0:
        continue
    label = "Operator F with CA" if op == "CA" else f"Operator {op}"
    plt.plot(x_vals_interp, data["mean"], label=label)
    plt.fill_between(x_vals_interp, data["mean"] - data["std"], data["mean"] + data["std"], alpha=0.3)

plt.xlabel("Path Progress [%]")
plt.ylabel("Deviation from Reference Path [m]")
plt.title("Mean ± Std Deviation from Reference Path")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()

# === Plot 2: Mean Trajectories on Map ===
map_yaml = os.path.join(folder_path, "tecnopolo_map.yaml")
with open(map_yaml, 'r') as f:
    map_data = yaml.safe_load(f)

image_path = os.path.join(folder_path, map_data['image'])
resolution = map_data['resolution']
origin = map_data['origin']

map_image = mpimg.imread(image_path)

# Conversion pixel
def world_to_pixel(x, y):
    x_pix = (x - origin[0]) / resolution
    y_pix = map_image.shape[0] - ((y - origin[1]) / resolution)
    return x_pix, y_pix

colors = {'F': 'orange', 'G': 'blue', 'U': 'green', 'CA': 'red'}

start_px = world_to_pixel(*start_mean)
end_px = world_to_pixel(*end_ref)
ref_start_px = world_to_pixel(*start_ref)
ref_end_px = world_to_pixel(*end_ref)

fig, ax = plt.subplots(figsize=(12, 8))
ax.imshow(map_image, cmap='gray', origin='upper')

# Reference path black (tratteggiato)
ax.plot([ref_start_px[0], ref_end_px[0]], [ref_start_px[1], ref_end_px[1]],
        linestyle='--', color='black', linewidth=2, label='Reference Path')

# Other trajectories
for op, (mean_x, mean_y) in mean_trajectories.items():
    if mean_x.size == 0:
        continue
    label = "Operator F with CA" if op == "CA" else f"Operator {op}"
    px, py = zip(*[world_to_pixel(x, y) for x, y in zip(mean_x, mean_y)])
    ax.plot(px, py, label=label, linewidth=2, color=colors[op])

# Start and goal poses
start_label = f"Start Mean [{start_mean[0]:.2f}, {start_mean[1]:.2f}]"
ax.plot(start_px[0], start_px[1], marker='o', color='darkviolet', label=start_label, markersize=8)
ax.plot(end_px[0], end_px[1], marker='o', color='dimgray', label="Goal [9, -10]", markersize=8)

# Layout
ax.set_title("Mean Trajectories on Tecnopolo Map")
ax.axis('equal')
ax.set_xticks([])
ax.set_yticks([])
ax.grid(False)
ax.legend(loc='upper right')
plt.tight_layout()
plt.show()

# === Plot 3: Timing (marker SOLO per expected) ===
CONTROL_FREQ_HZ = 50
STEP_DURATION = 1.0 / CONTROL_FREQ_HZ

params = {
    "F": {"ta": None, "tb": 20, "tab": None},
    "G": {"ta": 20, "tb": 25, "tab": None},
    "U": {"ta": 15, "tb": 30, "tab": 18},
    "CA": {"ta": None, "tb": 30, "tab": None},
}

op_labels = {"F": "Operator F", "G": "Operator G", "U": "Operator U", "CA": "Operator F with CA"}

fig, axs = plt.subplots(4, 1, figsize=(9, 12), sharex=True)
timing_stats = {}

for op, trajs in trajectories.items():
    if op not in params:
        continue

    if op == "F":
        file_matches = [f for f in all_files if "operator_F" in f and "user_3" not in f and "operator_CA" not in f]
    elif op == "CA":
        file_matches = [f for f in all_files if "operator_CA" in f or "user_31" in f]
    else:
        file_matches = [f for f in all_files if f"operator_{op}" in f]

    file_matches.sort()
    ta_list, tab_list, tb_list = [], [], []

    for i, (x, y) in enumerate(trajs):
        if len(file_matches) <= i:
            continue
        df = pd.read_csv(file_matches[i])
        finish_idxs = df.index[df['flag_finish'] == 1].tolist()

        if op in ["F", "CA"] and len(finish_idxs) >= 1:
            tb_time = finish_idxs[0] * STEP_DURATION
            tb_list.append(tb_time)

        elif op == "G" and len(finish_idxs) >= 2:
            ta_time = finish_idxs[0] * STEP_DURATION
            tb_time = finish_idxs[1] * STEP_DURATION
            ta_list.append(ta_time)
            tb_list.append(tb_time)

        elif op == "U" and len(finish_idxs) >= 3:
            ta_time = finish_idxs[0] * STEP_DURATION
            tab_time = finish_idxs[1] * STEP_DURATION
            tb_time = finish_idxs[2] * STEP_DURATION
            ta_list.append(ta_time)
            tab_list.append(tab_time)
            tb_list.append(tb_time)

    timing_stats[op] = {
        "ta": {"mean": float(np.mean(ta_list)), "std": float(np.std(ta_list))} if ta_list else None,
        "tab": {"mean": float(np.mean(tab_list)), "std": float(np.std(tab_list))} if tab_list else None,
        "tb": {"mean": float(np.mean(tb_list)), "std": float(np.std(tb_list))} if tb_list else None,
    }

for idx, op in enumerate(["F", "G", "U", "CA"]):
    ax = axs[idx]
    ax.set_title(op_labels[op])
    ax.grid(True, axis='x')
    ax.set_xlim(0, 35)
    ax.set_yticks([])

    stats = timing_stats.get(op, {})
    expected = params[op]

    handles = []  

    for key, color, label in zip(['ta', 'tab', 'tb'],
                                 ['blue', 'purple', 'red'],
                                 ['ta', 'tab', 'tb']):
        val = stats.get(key)

        if val:
            ax.axvline(val['mean'], color=color, linestyle='-', linewidth=2)
            ax.fill_betweenx([0, 1], val['mean'] - val['std'], val['mean'] + val['std'],
                             color=color, alpha=0.2)

            handles.append(mlines.Line2D([], [], color=color,
                                         linestyle='-', linewidth=2,
                                         label=f'{label} = {val["mean"]:.2f} ± {val["std"]:.2f}s'))

        if expected[key] is not None:
            ax.axvline(expected[key], color=color, linestyle='--', linewidth=2.0)
            ax.plot(expected[key], 0.5, marker='s', color=color, markersize=8)

            # handler for legenda (expected with marker)
            handles.append(mlines.Line2D([], [], color=color, marker='s',
                                         linestyle='--', linewidth=2.0,
                                         label=f'{label} expected = {expected[key]}s'))

    if handles:
        ax.legend(handles=handles, loc='center left', bbox_to_anchor=(1.02, 0.5))

plt.xlabel("Time [s]")
plt.tight_layout(rect=[0, 0, 0.85, 1])  
plt.show()

