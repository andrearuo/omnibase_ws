# Packages Description
## cbf_stl_pkg:  
This package provides the `cbf_stl_node`, which implements the CBF-STL navigation algorithm.

Editable parameters in `cbf_stl_node.cpp`:
```cpp
float MAX_VEL_ROBOT = 0.7;                  // 1.0f is the max
float OBS_VEL_ROBOT = 0.5;                  // Velocity to reduce the robot - velocity from obstacles
float OBS_DIST_ROBOT = 1.5;                 // Distance to reduce the robot velocity from obstacles          
float K_OBS = 1.0;                          // Obstacle constraint barrier parameter
int ESP_OBS = 1;                            // Obstacle constraint barrier parameter
double FOV_GOAL_RADIANS = 5 * M_PI / 180.0; // Angular constraint barrier parameter
int ESP_FOV_GOAL = 1;                       // Angular constraint barrier parameter
int K_FOV_GOAL = 1;                         // Angular constraint barrier parameter
```


## manager_cbf_stl_pkg:  
This package provides the `manager_cbf_stl_node`, which coordinates the overall operation of the CBF-STL navigation system.

Editable parameters in `manager_cbf_stl_node.cpp`:
```cpp
constexpr auto DELAY_TTS = std::chrono::seconds(1);   // Delay before initial TTS 
constexpr auto DELAY_GOAL = std::chrono::seconds(1);  // Delay before sending goal 
constexpr int ESP_STL = 2;                            // STL constraint barrier parameter
constexpr float K_STL = 0.05;                         // STL constraint barrier parameter
constexpr int VOLUME_MAX = 100;                       // Maximum robot volume
constexpr float MIN_DISTANCE_NOTIFICATION = 0.8;      // Minimum distance
constexpr float MAX_DISTANCE_NOTIFICATION = 3.5;      // Maximum distance
```


## check_obstacle_pkg:  
This package provides the `check_obstacle_node`, which detects obstacles around the robot.
Editable parameters in `check_obstacle_node.py`:
```python
CHECK_OBSTACLE_RADIUS = 3.0 # Radius to check for obstacles around the robot
MAX_RADIUS_WALL_OBS = 0.5   # Maximum radius to classify an obstacle as a wall
RADIUS_WALL = 0.4           # Safety distance from wall
RADIUS_COLUMN = 0.6         # Safety distance from column
```

## my_interfaces:  
This package defines custom ROS 2 messages and services for communication between nodes, including both `msg` and `srv` types.

## pal_tts_msgs:  
This package defines the custom messages for PAL Text-to-Speech (TTS) functionalities. Repository can be found at: https://github.com/pal-robotics/tts_msgs.git