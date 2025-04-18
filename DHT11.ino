/*!
 Install DFRobot_DHT11 Library
 Step :
 Tools --> Click Manage Library --> Search DFRobot_DHT11 Library and install 

================================================================================
Connection DHT11 Sensor :
VCC - 3.3V
Gnd - Gnd 
OUT - pin number 10 (Arduino Uno)
aaaaaaa

 */

#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 27

void setup(){
  Serial.begin(115200);
}

void loop(){
  DHT.read(DHT11_PIN);
  Serial.print("temp:");
  Serial.print(DHT.temperature);
  Serial.print("  humi:");
  Serial.println(DHT.humidity);
  delay(1000);
}
