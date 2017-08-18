#include <Wire.h>
#include <sfm3000wedo.h>

SFM3000wedo measflow(64);

int offset = 32000; // Offset for the sensor
float scale = 140.0; // Scale factor for Air and N2 is 140.0, O2 is 142.8


void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  delay(500); // let serial console settle


  // initialize the sesnor
  measflow.init();
  Serial.println("Sensor initialized!");
}

void loop() {
  unsigned int result = measflow.getvalue();

  float Flow = ((float)result - offset) / scale;
    
  Serial.print("Flow: ");
  if (result >= 0) {
    Serial.print(" ");
  }
  Serial.print(Flow, 5);
  Serial.print("\n");

  delay(100);
}
