#include "nav_msgs/Odometry.h"
#include <ros/ros.h>

struct robot_position {
  float pos_x;
  float pos_y;
  float pos_z;
};

class OdomListener {

public:
  // constructor
  OdomListener(ros::NodeHandle *nh) {
    odom_subscriber =
        nh->subscribe("/robot1/odom", 1000, &OdomListener::odom_callback, this);
  }
  void odom_callback(const nav_msgs::Odometry::ConstPtr &msg);

private:
  ros::Subscriber odom_subscriber;
  double x_current = 0.0;
  double y_current = 0.0;
  robot_position robot_pos;
};