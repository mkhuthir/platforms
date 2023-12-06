#!/bin/sh

sudo apt install openocd
sudo apt install urjtag
sudo apt install gdb-multiarch
pip install -U pyocd
sudo apt install device-tree-compiler


# https://wiki.makerdiary.com/nrf52840-mdk-usb-dongle/guides/ncs/setup/#install-zephyr-sdk
# west pre
wget https://apt.kitware.com/kitware-archive.sh
sudo bash kitware-archive.sh
sudo apt install --no-install-recommends git cmake ninja-build gperf \
ccache dfu-util device-tree-compiler wget \
python3-dev python3-pip python3-setuptools python3-tk python3-wheel xz-utils file \
make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1

# verify versions
echo "cmake:\n"
cmake --version
echo "pyton3:\n"
python3 --version
echo "dtc:\n"
dtc --version

# west install
pip3 install --user west
echo 'export PATH=~/.local/bin:"$PATH"' >> ~/.bashrc
source ~/.bashrc

# west repo
west init -m https://github.com/makerdiary/ncs-playground --mr main nrf_ws
cd nrf_ws
west update
west zephyr-export

# Zephyr SDK bundle
cd ~
wget https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v0.16.1/zephyr-sdk-0.16.1_linux-x86_64.tar.xz
wget -O - https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v0.16.1/sha256.sum | shasum --check --ignore-missing
tar xvf zephyr-sdk-0.16.1_linux-x86_64.tar.xz
cd zephyr-sdk-0.16.1
./setup.sh

#udev
sudo cp ~/zephyr-sdk-0.16.1/sysroots/x86_64-pokysdk-linux/usr/share/openocd/contrib/60-openocd.rules /etc/udev/rules.d
sudo udevadm control --reload

# install west python deps
pip3 install --user -r zephyr/scripts/requirements.txt
pip3 install --user -r nrf/scripts/requirements.txt
pip3 install --user -r bootloader/mcuboot/scripts/requirements.txt