  sudo apt-get install libusb-1.0-0-dev
  # http://www.phidgets.com/docs/OS_-_Linux
 ./configure
  make
  sudo make install
  sudo cp udev/99-phidgets.rules /etc/udev/rules.d
