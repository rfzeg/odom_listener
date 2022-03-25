#include "odom_listener/odom_listener.hpp"
#include "nav_msgs/Odometry.h"
#include <ros/ros.h>

void OdomListener::odom_callback(const nav_msgs::Odometry::ConstPtr &msg) {
  x_current = msg->pose.pose.position.x;
  y_current = msg->pose.pose.position.y;
  // robot_pos.pos_x = msg->pose.pose.position.x;
  // robot_pos.pos_y = msg->pose.pose.position.y;

  std::cout << "x: " << x_current << ", y: " << y_current << std::endl;
}