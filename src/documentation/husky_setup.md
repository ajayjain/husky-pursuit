Installation:
$ sudo apt-get install ros-hydro-husky-robot
$ sudo apt-get install ros-hydro-husky-desktop # visualization
$ rosrun husky_bringup install

$ roscore

Actual robot:
$ roslaunch husky_base base.launch port:=/dev/ttyUSB0

Simulation:
$ roslaunch husky_gazebo husky_empty_world.launch
$ roslaunch husky_viz view_robot.launch

Plug in joystick
$ lsusb -v # makes ch flightsticks recognizable by the system
$ roslaunch husky_teleop teleop.launch # joystick teleop launch
$ jstest-gtk # visualize joystick

Getting the SICK lidar to work
	Install sicktoolbox and sicktoolbox_wrapper packages

$ rosdep install sicktoolbox_wrapper rviz
$ rosmake sicktoolbox_wrapper rviz
$ roscore

# (this is the port that the SICK is connected to /dev/ttyUSB0, /dev/lms200, etc...)
$ rosparam set sicklms/port /dev/ttyUSB0
$ rosparam set sicklms/baud 38400

In a new terminal:
$ rosrun sicktoolbox_wrapper sicklms


https://learn.adafruit.com/adafruit-arduino-lesson-13-dc-motors/transistors


Hokuyo + rviz
--------
$ sudo apt-get install ros-hydro-hokuyo-node


$ roscore
$ sudo service husky-core start
$ roslaunch husky_base base.launch port:=/dev/ttyUSB0
$ roslaunch husky_description description.launch
$ roslaunch hokuyo_node hokuyo_test.launch
$ roslaunch husky_viz view_navigation.launch


Gmapping
-------
roslaunch husky_navigation gmapping_demo.launch