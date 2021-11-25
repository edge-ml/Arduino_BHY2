**⚠️⚠️ WE RECOMMEND YOU INSTALL THE UNIFIED EDGE-ML ARDUINO LIBRARY FOLLOWING THE INSTRUCTIONS [HERE](https://github.com/edge-ml/EdgeML-Arduino)⚠️⚠️**

# nicla-sense-me-fw

Firmware to use with the Nicla Sense ME to record sensor data with edge-ml over Web Bluetooth.

## Before you start
1. Download the the Arduino IDE for your PC [here](https://www.arduino.cc/en/software)
2. Install the Arduino IDE on your PC
3. Open the Arduino IDE

**⚠️ IMPORTANT: YOUR ARDUINO IDE HAS TO BE AT LEAST AT VERSION 1.8.13 !**

## Installe Firmware on Nicla Sense ME
1. Add the board-specific support files of the Nicla Sense Me by going to `Tools => Board: ... => Board Manager`. 
2. In the dialog, seach for "nicla" and install `Arduino Mbed OS Nicla Boards by Arduino` (this may take a while). 
Note: on Windows, make sure to confirm the dialog that requests to do changes on your PC that pops up during installation (otherwise drivers can not be installed successfully).
3. Configure your Arduino IDE to compile for the Nicla Sense ME by selecting ``Tools => Board => Nicla Sense ME``
4. Select the port by clicking `Tools => Port => THE PORT YOUR NICLA IS CONNECTED TO` (Hint: if the name of the Nicla is not showing in the list of ports, you can identify the correct port by plugging the Nicla in and out and re-opening the menu which will either show or hide the Port)
5. Download the source code of the latest firmware (Latest, not Draft) version as .zip form the [release page](https://github.com/edge-ml/nicla-sense-me-fw/releases).
6. Add the downloaded .zip file as a library to the Arduino IDE: `Sketch => Include Library => Add .ZIP library`.
7. Open the edge-ml firmware by clicking: `Files => Examples => Edge_ML => App`.
8. Upload the firmware to your Nicla by clicking the right facing arrow in the top menu bar. This will compile the firmware and upload to your Nicla. 
9. **Compilation may take a while and give you a lot of warnings. Don't worry, this is expected as long as it does not fail.**
10. You are now ready to connect to your Nicla from the edge-ml website
