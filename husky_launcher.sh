export ROS_ROOT=/home/ros/catkin_ws
export PATH=$ROS_ROOT/bin:$PATH

export ROS_MASTER_URI=http://192.168.1.125:11311
# export ROS_HOSTNAME=192.168.1.125

#if [ $(tty) == "/dev/tty2" ]; then
#	echo "Automatically logged in"
#	roslaunch husky_base base.launch port:=/dev/ttyUSB0
#fi
