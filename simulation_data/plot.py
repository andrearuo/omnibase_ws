import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import yaml
import os

cbf_stl = True
# === LOAD DATA ===
df = pd.read_csv("data_user_36_operator_DA.csv")
df['time'] = df['global_counter'] / 50.0
if (cbf_stl):
    tempi_flag = df.loc[df['flag_finish'] == 1, 'time']

# === PLOT 1: TEMPORAL ANALYSIS ===
fig, axs = plt.subplots(3, 1, figsize=(12, 8), sharex=True)

# Velocity
axs[0].plot(df['time'], df['v_real'], color='black', label='v_real')
axs[0].plot(df['time'], df['v_max'], color='red', linestyle='--', label='v_max')
axs[0].set_ylabel('Velocity')
axs[0].legend()
axs[0].grid(True)

# h_barrier
if (cbf_stl):
    axs[1].plot(df['time'], df['h_barrier'], color='black')
    axs[1].set_ylabel('h_barrier')
    axs[1].grid(True)

# distance_hr
axs[2].plot(df['time'], df['distance_hr'], color='black')
axs[2].set_ylabel('distance_hr')
axs[2].set_xlabel('Time [s]')
axs[2].grid(True)

# Vertical lines for flag_finish times
if (cbf_stl):
    for t in tempi_flag:
        for ax in axs:
            ax.axvline(x=t, color='green', linestyle='--')

fig.suptitle('Temporal Analysis of Robot Parameters')
plt.tight_layout()
plt.show()

# === PLOT 2: PATH ON MAP ===
# Load the map
with open("tecnopolo_map.yaml", 'r') as f:
    map_data = yaml.safe_load(f)

image_path = map_data['image']
resolution = map_data['resolution']
origin = map_data['origin']  # [x, y, yaw]

# Image path (assumed relative to the yaml)
img_path_full = os.path.join(os.path.dirname("tecnopolo_map.yaml"), image_path)
map_image = mpimg.imread(img_path_full)

# Convert world coordinates to pixels
x_pix = (df['x_pos'] - origin[0]) / resolution
y_pix = (df['y_pos'] - origin[1]) / resolution
y_pix = map_image.shape[0] - y_pix  # Flip vertically for image system

# Plot the path on the map
plt.figure(figsize=(12, 5))
plt.imshow(map_image, cmap='gray', origin='upper')
plt.plot(x_pix, y_pix, color='blue', linewidth=2, label='Robot Path')
plt.plot(x_pix.iloc[0], y_pix.iloc[0], 'go', markersize=10, label='Start')
plt.plot(x_pix.iloc[-1], y_pix.iloc[-1], 'ro', markersize=10, label='Goal')
plt.title("Robot Path on 'tecnopolo' Map")
plt.axis('equal')
plt.legend()
plt.grid(False)
plt.show()

