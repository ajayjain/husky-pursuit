http://wiki.ros.org/leap_motion

Install driver from developer.leapmotion.com
	Installs: LeapControlPanel, Recalibrate, Visualizer, leapd

robonurse@robonurse:~/Downloads/LeapDeveloperKit_2.0.1+15831_linux$ sudo dpkg -i Leap-2.0.1+15831-x64.deb 
(Reading database ... 425919 files and directories currently installed.)
Preparing to replace leap 2.0.1+15831 (using Leap-2.0.1+15831-x64.deb) ...
leapd stop/waiting
Unpacking replacement leap ...
removed `/etc/init.d/leapd'
Setting up leap (2.0.1+15831) ...
Leap Motion installed under /usr/bin and /usr/sbin
Allow Leap Motion in the system tray with the following command:
  gsettings set com.canonical.Unity.Panel systray-whitelist "$(gsettings get com.canonical.Unity.Panel systray-whitelist | sed -e "s/]$/, 'LeapControlPanel']/")"
leapd start/running, process 15728
Check Leap Motion daemon with:
  service leapd status
Open the Leap Motion GUI with:
  LeapControlPanel
See /usr/share/Leap/README.linux for more information.
Processing triggers for ureadahead ...


Add the LeapSDK to your PYTHONPATH. I add this to my .bashrc:
    export PYTHONPATH=$PYTHONPATH:$HOME/LeapSDK/lib:$HOME/LeapSDK/lib/x64 # for 64 bit


# sudo apt-get install ros-hydro-leap-motion # not needed anymore



Using the Leap Motion to control the Husky
    leapd # one terminal
    roscore
    roslaunch husky_pursuit husky_bringup
    roslaunch husky_pursuit leap_teleop

To monitor Twist velocity commands:
    rostopic echo /husky/cmd_vel