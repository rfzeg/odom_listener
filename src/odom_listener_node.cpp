#include "odom_listener/odom_listener.hpp"
#include "ros/ros.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "odom_listener");
  ros::NodeHandle nh;
  OdomListener nc = OdomListener(&nh);
  ros::spin();
}