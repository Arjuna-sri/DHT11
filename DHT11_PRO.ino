/*!
 Install DFRobot_DHT11 Library
 Step :
 Tools --> Click Manage Library --> Search DFRobot_DHT11 Library and install 

================================================================================
Connection DHT11 Sensor :
VCC - 3.3V
Gnd - Gnd 
OUT - pin number 10 (Arduino Uno)
*/

#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 27

void setup(){
  Serial.begin(115200);
}

void loop(){
  DHT.read(DHT11_PIN);

  // Print temperature and humidity readings
  Serial.print("temp:");
  Serial.print(DHT.temperature);
  Serial.print("  humi:");
  Serial.println(DHT.humidity);

  // Check the temperature and print the AC state
  if (DHT.temperature > 25) {
    Serial.println("AC ON");
  } else {
    Serial.println("AC OFF");
  }

  delay(1000); // Delay for 1 second
}
