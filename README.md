/*
  SFM3000wedo.cpp - Library for reading values from flowmeter Sensirion SFM3000wedo
  https://www.sensirion.com/en/flow-sensors/mass-flow-meters-for-high-precise-measurement-of-gases/low-pressure-drop-mass-flow-meter/
  
  Created by WeDo, Zuerich 20170616
  
  Based on: https://forum.arduino.cc/index.php?topic=466234.0 - thanks slomobile & nickgammon
  
  Released into the public domain.
*/


## Installation

Download arduino-sfm3000wedo either via git or from the releases page and place it in
the Arduino/libraries directory. After restarting the Arduino IDE, you will get
menu items under libraries and examples.

## Integrating it into your sketch

Assuming you installed the library as described above, the following steps are necessary:

1. Import the Wire library like this: From the menu bar, select Sketch > Import Library > Wire
2. Import the arduino-sfm3000wedo library like this: From the menu bar, select Sketch > Import Library > arduino-sfm3000wedo
3. Create an instance of the `sfm3000wedo` class, with the I2C address of the sensor as parameter (check datasheet, standard is 0x40 equals 64) -> sfm3000wedo measflow(64);
4. In `setup()`, make sure to init the library: sfm3000wedo.init()
5. If you want to use the serial console, remember to initialize the Serial library with `Serial.begin(9600)`
6. Finally, call `measflow.getvalue()` in the `loop()` function, which returns a float value of the current flow


## Find example code in folder "examples"


