/*
 * Project Ultrasonic
 * Description:
 * Author: Michael Young
 * Date:
 */
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