#include <Wire.h> //include the wire.h library link is in the description
#include <BH1750.h> // include bh1750 library link in the description
 
 
BH1750 lightMeter;
 
 
void setup(){
  Serial.begin(9600);// serial moniter boardrate
  lightMeter.begin();
  Serial.println("Running...");//serial print when its starts running the program
}
 
 
void loop() {
  uint16_t lux = lightMeter.readLightLevel();// calculation of lux value
  Serial.print("Light: ");//serial print light
  Serial.print(lux);
  Serial.println(" lux");//units of light is lux serial print lux 
  delay(1000);
}
