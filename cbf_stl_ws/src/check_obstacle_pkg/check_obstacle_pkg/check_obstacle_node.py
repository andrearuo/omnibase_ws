import rclpy
import numpy as np
import matplotlib.pyplot as plt
import math
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import PoseWithCovarianceStamped
from std_msgs.msg import Header
from my_interfaces.msg import Obstacles
from sklearn.cluster import DBSCAN

# Definitions
NODE_NAME = "check_obstacles_node"
PUBLISHER_OBS_NAME = "/obstacles"
SUBSCRIBER_LASER_SCANNER = "/scan"
SUBSCRIBER_ODOM_NAME = "/amcl_pose"
CHECK_OBSTACLE_RADIUS = 3.0 # Radius to check for obstacles around the robot
MAX_RADIUS_WALL_OBS = 0.5   # Maximum radius to classify an obstacle as a wall
RADIUS_WALL = 0.4           # Safety distance from wall
RADIUS_COLUMN = 0.6         # Safety distance from column

class CheckObstacles(Node):
    def __init__(self, plot_enabled=False):
        super().__init__(NODE_NAME)

        self.plot_enabled = plot_enabled
        self.laser_subscriber = self.create_subscription(
            LaserScan,
            SUBSCRIBER_LASER_SCANNER,
            self.laser_callback,
            10)

        self.odom_subscriber = self.create_subscription(
            PoseWithCovarianceStamped,
            SUBSCRIBER_ODOM_NAME,
            self.odom_callback,
            10)

        self.obstacle_publisher = self.create_publisher(Obstacles, PUBLISHER_OBS_NAME, 10)

        self.latest_pose = None
        self.latest_laser_x = None
        self.latest_laser_y = None
        self.detected_obstacles = []
        self.clusters_info = []

        self.get_logger().info("Obstacle checker node initialized")

    def odom_callback(self, msg):
        self.latest_pose = msg.pose.pose
        if self.plot_enabled and self.latest_laser_x is not None and self.latest_laser_y is not None:
            self.plot_laser(self.latest_laser_x, self.latest_laser_y)

    def laser_callback(self, msg):
        angles = np.linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        ranges = np.array(msg.ranges)

        valid = np.isfinite(ranges) & (ranges > msg.range_min) & (ranges < msg.range_max)
        ranges = ranges[valid]
        angles = angles[valid]

        x_local = ranges * np.cos(angles)
        y_local = ranges * np.sin(angles)

        if self.latest_pose is not None:
            x_r = self.latest_pose.position.x
            y_r = self.latest_pose.position.y
            orientation = self.latest_pose.orientation

            siny_cosp = 2.0 * (orientation.w * orientation.z + orientation.x * orientation.y)
            cosy_cosp = 1.0 - 2.0 * (orientation.y ** 2 + orientation.z ** 2)
            yaw = math.atan2(siny_cosp, cosy_cosp)

            cos_yaw = math.cos(yaw)
            sin_yaw = math.sin(yaw)
            x_global = x_r + x_local * cos_yaw - y_local * sin_yaw
            y_global = y_r + x_local * sin_yaw + y_local * cos_yaw

            self.latest_laser_x = x_global
            self.latest_laser_y = y_global

            self.detected_obstacles = []
            self.clusters_info = []

            for i in range(len(x_global)):
                dx = x_global[i] - x_r
                dy = y_global[i] - y_r
                distance = math.sqrt(dx * dx + dy * dy)
                if distance < CHECK_OBSTACLE_RADIUS:
                    self.detected_obstacles.append((x_global[i], y_global[i]))

            # Clustering obstacles detected within range
            if len(self.detected_obstacles) >= 5:
                points = np.array(self.detected_obstacles)
                clustering = DBSCAN(eps=0.15, min_samples=4).fit(points)
                labels = clustering.labels_
                unique_labels = set(labels)
                for label in unique_labels:
                    if label == -1:
                        continue
                    cluster = points[labels == label]
                    centroid = cluster.mean(axis=0)
                    max_dist = np.linalg.norm(cluster - centroid, axis=1).max()
                    kind = 'column' if max_dist < MAX_RADIUS_WALL_OBS else 'wall'

                    if kind == 'column':
                        radius = RADIUS_COLUMN  # safety distance from column
                    else:
                        radius = RADIUS_WALL  # safety distance from wall

                    self.clusters_info.append((kind, centroid, radius))
                # ------------------------------------------------------------------


            # Publish custom message
            obs_msg = Obstacles()
            obs_msg.o_radius = []
            obs_msg.ox_pose = []
            obs_msg.oy_pose = []
            for kind, centroid, radius in self.clusters_info:
                obs_msg.ox_pose.append(float(centroid[0]))
                obs_msg.oy_pose.append(float(centroid[1]))
                obs_msg.o_radius.append(float(radius))
            obs_msg.o_number = len(self.clusters_info)
            self.obstacle_publisher.publish(obs_msg)

            if self.plot_enabled:
                self.plot_laser(x_global, y_global)

    def plot_laser(self, x, y):
        plt.clf()
        plt.title("Laser Scanner - Obstacles Detected")
        plt.xlabel("X (m)")
        plt.ylabel("Y (m)")
        plt.axis('equal')
        plt.plot(x, y, 'r.', markersize=2)

        if self.latest_pose is not None:
            x_r = self.latest_pose.position.x
            y_r = self.latest_pose.position.y
            orientation = self.latest_pose.orientation

            siny_cosp = 2.0 * (orientation.w * orientation.z + orientation.x * orientation.y)
            cosy_cosp = 1.0 - 2.0 * (orientation.y ** 2 + orientation.z ** 2)
            yaw = math.atan2(siny_cosp, cosy_cosp)

            plt.plot(x_r, y_r, 'bo')
            arrow_length = 0.5
            x_arrow = x_r + arrow_length * math.cos(yaw)
            y_arrow = y_r + arrow_length * math.sin(yaw)
            plt.plot([x_r, x_arrow], [y_r, y_arrow], 'b-')

            circle = plt.Circle((x_r, y_r), CHECK_OBSTACLE_RADIUS, color='g', fill=False, linestyle='--')
            plt.gca().add_patch(circle)

            if self.detected_obstacles:
                obs_x, obs_y = zip(*self.detected_obstacles)
                plt.plot(obs_x, obs_y, 'ko', markersize=4)

            for kind, centroid, radius in self.clusters_info:
                if kind == 'colonna':
                    circle = plt.Circle(centroid, radius, color='green', fill=False, linestyle='--')
                    plt.gca().add_patch(circle)
                    plt.plot(*centroid, 'go')
                elif kind == 'muro':
                    plt.plot(*centroid, 'rx')

        plt.pause(0.001)


def main(args=None):
    rclpy.init(args=args)
    node = CheckObstacles(plot_enabled=True)
    if node.plot_enabled:
        plt.ion()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.plot_enabled:
            plt.ioff()
            plt.show()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()