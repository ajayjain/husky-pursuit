laser_scan_matcher is part of the scan_tools stack/meta-package. It is a pure LaserScan based localizer (no need for Odometry or IMU necessarily).

Library: https://github.com/ccny-ros-pkg/scan_tools/tree/master

    cd ~/<my_ws>/src
    git clone https://github.com/ccny-ros-pkg/scan_tools.git
    rosdep install scan_tools
    cd ..
    catkin_make
    cd ~/<my_ws>
    source devel/setup.bash

Before running catkin_make, I needed to install GSL (GNU Scientific Library).
Dowload from http://www.gnu.org/software/gsl/ (http://mirror.anl.gov/pub/gnu/gsl/gsl-latest.tar.gz).
Extract, and cd into the extracted directory.

    ./configure
    make
    sudo make install