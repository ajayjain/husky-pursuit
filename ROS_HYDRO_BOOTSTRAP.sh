#!/bin/bash
# Ajay Jain

echo "Updating apt-get"
apt-get update -y
echo "installing ssh and ntp"
apt-get install ssh ntp -y
echo "removing openoffice"
apt-get remove openoffice.org* -y
echo "installing vim, emacs23"
apt-get install vim emacs23 -y


echo "Adding ROS to the apt-get sources"
echo "deb http://packages.ros.org/ros/ubuntu precise main" > /etc/apt/sources.list.d/ros-latest.list
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -
sudo apt-get update

#echo "Updating apt sources file, so that all packages can be read"
#cat /etc/apt/sources.list | sed "s/# deb/deb/g" > /tmp/new_sources.list
#cp /tmp/new_sources.list /etc/apt/sources.list
#sudo apt-get update

#Ros specific operations
echo "Adding ros user and group"
groupadd ros
useradd -m -g ros ros
usermod -a -G sudo ros
usermod -a -G video ros
usermod -s /bin/bash ros
echo -e "ros\nros" | passwd ros

echo "Adding .bashrc"
cp /etc/skel/.bashrc /home/ros/.bashrc
cat >> /home/ros/.bashrc <<EOF
if [ -f /opt/ros/hydro/setup.bash ] ; then
    source /opt/ros/hydro/setup.bash
else
    echo "ROS is not installed yet. After installing, please"
    echo "source your .bashrc again by typing:"
    echo "source ~/.bashrc"
fi
EOF
sudo chown ros:ros /home/ros/.bashrc
sudo chmod a+rw /home/ros/.bashrc


echo "Pre-ros"
ps -aux

echo "Installing ros"
apt-get install -y ros-hydro-desktop-full ros-hydro-usb-cam libusb-1.0-0-dev

echo "Installing Husky ros packages"
sudo apt-get install ros-hydro-husky-robot

echo "Post ros"
ps -aux
echo "Done"
