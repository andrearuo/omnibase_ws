# Workspaces Description

- **cbf_stl_ws**: this workspace includes 
  -  the CBF-STL navigation algorithm in `cbf_stl_node.cpp`;
  -  the `manager_cbf_stl_node.cpp`, which coordinates the overall operation of the CBF-STL navigation system; 
  -  the `check_obstacle_node.py`, which is responsible for detecting obstacles around the robot; 
  -  the `my_interfaces` package which defines custom ROS 2 messages and services for communication between nodes, including both `msg` and `srv` types and 
  -  the `pal_tts_msgs` package which defines the custom messages for PAL TTS functionalities.

- **simulation_data**:  this folder contains the results of 36 simulations along with utility scripts:  
  -  `plot.py`: this code generates plots of the robot’s velocity and its maximum velocity, the distance between the user and the robot, and the barrier function values;  
  -  `results.py`: this code produces plots of the spatial deviation of the robot’s paths with respect to the reference path, the average paths on the map compared to the reference path, and the average execution times with their respective variances for each of the four test cases. 

- **zed2_camera_ws**:  
  this workspace includes the ROS2 wrapper for the ZED2 camera, its ROS2 interfaces, example nodes, and the `zed2_camera_node.cpp` which estimates and publishes the distance between the user and the robot. 


# How to Run the System
## Start Virtual Simulation
Open four terminals and run the following commands:

```bash
# Terminal 1 — Gazebo Simulation
ros2 launch tiago_pro_gazebo tiago_pro_gazebo.launch.py navigation:=True

# Terminal 2 — Camera
ros2 launch zed2_camera_pkg zed2_camera.launch.py 

# Terminal 3 — CBF-STL
ros2 launch cbf_stl_pkg cbfstl.launch.py

# Terminal 4 — Manager CBF-STL
ros2 run manager_cbf_stl_pkg manager_cbf_stl_node 
```


## Start Real-Robot Simulation
```bash
# Terminal 1 - Start AMCL on the Real Robot (via SSH)
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1
pal module stop localization
pal module start localization
ros2 service call /map_server/load_map nav2_msgs/srv/LoadMap "map_url: '/home/pal/tecnopolo_map.yaml'"
ros2 service call /global_costmap/clear_entirely_global_costmap nav2_msgs/srv/ClearEntireCostmap

# Terminal 2 - Start RVIZ2
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1
rviz2 -d /home/user/navigation.rviz

# Terminal 3 - Start camera
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1
ros2 launch zed2_camera_pkg zed2_camera.launch.py

# Terminal 4 - Start CBF-STL and check obstacle nodes
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1
ros2 launch cbf_stl_pkg cbfstl.launch.py

# Terminal 5 - Start manager CBF-STL
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1
ros2 run manager_cbf_stl_pkg manager_cbf_stl_node 

# Terminal 6 - Input requests
ros2 run cyclone_dev_cfg pal_connect.sh enx00e04c681f94 10.68.0.1

# command used in data_user_1-10_operator_F.csv
ros2 topic pub /input my_interfaces/msg/Input "{temp_operator: 'F', goal: [9.0, -10.0], goal2: [0.0, 0.0], ta: 1, tb: 20, tab: 0}" --once

# command used in data_user_11-20_operator_G.csv
ros2 topic pub /input my_interfaces/msg/Input "{temp_operator: 'G', goal: [9.0, -10.0], goal2: [0.0, 0.0], ta: 20, tb: 25, tab: 0}" --once

# command used in data_user_21-30_operator_U.csv
ros2 topic pub /input my_interfaces/msg/Input "{temp_operator: 'U', goal: [13.0, -10.0], goal2: [9.0, -10.0], ta: 15, tb: 30, tab: 18}" --once

# command used in data_user_31-35_operator_CA.csv
ros2 topic pub /input my_interfaces/msg/Input "{temp_operator: 'F', goal: [9.0, -10.0], goal2: [0.0, 0.0], ta: 1, tb: 30, tab: 0}" --once

# command used in data_user_36_operator_DA.csv
ros2 topic pub /input my_interfaces/msg/Input "{temp_operator: 'F', goal: [-16.5, -9.0], goal2: [0.0, 0.0], ta: 1, tb: 120, tab: 0}" --once
```



