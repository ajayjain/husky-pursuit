#!/bin/bash
# Ajay Jain
# This file is to bootstrap the environment of
# the robot computer, not a workstation.

export ROS_WS=/home/ros/catkin_ws

source $ROS_WS/devel/setup.bash

export PATH=$ROS_ROOT/bin:$PATH

export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$ROS_WS

export ROS_MASTER_URI=http://192.168.1.125:11311
export ROS_HOSTNAME=192.168.1.125

#if [ $(tty) == "/dev/tty2" ]; then
#	echo "Automatically logged in"
#	roslaunch husky_base base.launch port:=/dev/ttyUSB0
#fi
