#!/bin/bash
# Ajay Jain

mkdir ~/ros

# laser_drivers: sicktoolbox2, hokuyo_node
install_laser_drivers() {
	cd $ROS_ROOT/src
	git clone https://github.com/clearpathrobotics/laser_drivers.git
	cd ..
	catkin_make
}

install_scan_tools() {
	cd ~/ros
	git clone https://github.com/ccny-ros-pkg/scan_tools.git
	rosdep install scan_tools
	rosmake scan_tools
}
