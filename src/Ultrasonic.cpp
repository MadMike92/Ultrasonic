/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "c:/Users/mjyou/OneDrive/Documents/Particle/Ultrasonic/src/Ultrasonic.ino"
/*
 * Project Ultrasonic
 * Description:
 * Author: Michael Young
 * Date:
 */
  void setup();
void loop();
#line 7 "c:/Users/mjyou/OneDrive/Documents/Particle/Ultrasonic/src/Ultrasonic.ino"
int i = 0;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Serial.print("Hello World, time: ");
  Serial.print(millis());
  Serial.print(" loop: ");
  Serial.println(i++);
  delay(999);
}