##============================================================================
##
##  SCRIPT: 01_ROS_setup.sh
##
##  DESC: This script installs the specified ROS distribution and core ROS
##	 packages and prepares the ROS development environment 
##
##  AUTHOR: T.H. Chung (thchung@nps.edu)
##
##============================================================================
# Modification History
#  + 11/17/13 	- Added header/comments and new modification log
#-----------------------------------------------------------------------------


# install some useful binaries
sudo apt-get --assume-yes --quiet upgrade

echo '    ' 
echo "===================================="
echo " Installing useful development tools"
echo "===================================="
sudo apt-get install --assume-yes --quiet vim
sudo apt-get install --assume-yes --quiet subversion
sudo apt-get install --assume-yes --quiet git-core
sudo apt-get install --assume-yes --quiet ssh

echo '    ' 
echo "===================================="
echo " Installing useful Linux utilities  "
echo "===================================="
# For desktop recording
sudo apt-get install --assume-yes --quiet recordmydesktop gtk-recordmydesktop
# For running compatible Windows-based executables 
#  -- e.g., LiteShow application
sudo apt-get install --assume-yes --quiet wine
# For video playback and multimedia
sudo apt-get install --assume-yes --quiet vlc ffmpeg gstreamer0.10-plugins-ugly



# 
# Ref: http://www.ros.org/wiki/ROS/Installation
#
version=$(lsb_release -c | awk '{print $2}')  		# get version name

# Update sources.list appropriately
case $version in
raring)
echo "You are running 13.04 Raring Ringtail"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu raring main" > /etc/apt/sources.list.d/ros-latest.list'
;;
quantal)
echo "You are running 12.10 Quantal Quetzal"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu quantal main" > /etc/apt/sources.list.d/ros-latest.list'
;;
precise)
echo "You are running 12.04 Precise Pangolin"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu precise main" > /etc/apt/sources.list.d/ros-latest.list'
;;
ocelot)
echo "You are running 11.10 Oneiric Ocelot"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu ocelot main" > /etc/apt/sources.list.d/ros-latest.list'
;;
natty)
echo "You are running 11.04 Natty Narwhal"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu natty main" > /etc/apt/sources.list.d/ros-latest.list'
;;
maverick)
echo "You are running 10.10 Maverick Meerkat"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu maverick main" > /etc/apt/sources.list.d/ros-latest.list'
;;
lucid)
echo "You are running 10.04 Lucid Lynx"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu lucid main" > /etc/apt/sources.list.d/ros-latest.list'
;;
*)
echo "You are running something else"
;;
esac



# Update keys to repository sources list
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -
sudo apt-get update

# ====================================
# Install ROS
#  - Specify ROS distribution here!!
# ====================================
ROS_VERSION=hydro

echo '    ' 
echo "===================================="
echo " Installing ROS $ROS_VERSION        "
echo "===================================="
sudo apt-get install --assume-yes --quiet ros-$ROS_VERSION-desktop-full

sudo rosdep init		# Depending on how long the above takes, might need to re-input sudo credentials
rosdep update


# Update helper tools
sudo apt-get install --assume-yes --quiet python-wstool
sudo apt-get install --assume-yes --quiet ros-$ROS_VERSION-rx



# Update environment variables
echo '    ' >> ~/.bashrc
echo '# ROS Environment Variable Setup' >> ~/.bashrc
echo "source /opt/ros/$ROS_VERSION/setup.bash" >> ~/.bashrc
source ~/.bashrc


# Clean up
sudo apt-get autoremove --assume-yes --quiet
