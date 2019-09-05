/** Smart innovations 
 For details about components and projects follow us on 
 instagram : https://instagram.com/_smart_innovations_?igshid=p54n6v1ls4un
 and do like share and subsribe our channel **/

int sensor_pin = A0;
 int value = 0;
 int led_pin = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_pin , OUTPUT);
  pinMode(sensor_pin , INPUT);
  Serial.println("Reading from the sensor");
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(sensor_pin);
  
  value = value/10;
  Serial.println("Moisture");
  Serial.println(value);
  Serial.println("%");
  delay(1000);

   if(value>50)
   {
     digitalWrite(led_pin,HIGH);
   }
   else
   {
    digitalWrite(led_pin,LOW);
   }
   delay(1000);
   
   }
