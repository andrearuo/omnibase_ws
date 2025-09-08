# Simulation data Description
## plot.py
This code generates plots of the robot’s velocity and its maximum velocity, the distance between the user and the robot, and the barrier function values.
It is necessary to change the name of the csv file to be read in `df = pd.read_csv("csv_file_name")`.

## results.py
This code produces plots of the spatial deviation of the robot’s paths with respect to the reference path, the average paths on the map compared to the reference path, and the average execution times with their respective variances for each of the four test cases.

## Simulation data
- data_user_1-10_operator_F.csv: results of the 10 simulations with the F temporal operator.
- data_user_11-20_operator_G.csv: results of the 10 simulations with the G temporal operator.
- data_user_21-30_operator_U.csv: results of the 10 simulations with the U temporal operator.
- data_user_31-35_operator_CA.csv: results of the 5 simulations with the F temporal operator and unknown obstacles.
- data_user_36_operator_DA.csv: results of the simulation with the F temporal operator and unknown static and dynamic obstacles.

## tecnopolo_map.yaml
This file contains the yaml map configuration.

## tecnopolo_map.pgm
This file contains the pgm map image.
