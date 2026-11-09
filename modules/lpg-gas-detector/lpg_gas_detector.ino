//SMART INNOVATIONS
int redLed = 12;  // pin to give aleart signal when gas is leaked
int greenLed = 11; // pin to give safe signal
int buzzer = 10; // pin to give alaram
int analogread = A5; // pin to read data of sensor
void setup() {
  pinMode(redLed, OUTPUT); // output pins from arduino 
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(analogread, INPUT); // input pins to arduino
  Serial.begin(9600);
}

void loop() {

  Serial.print("Pin A0: ");
  Serial.println(analogread); // display of sensor value in serial moniter
  
  if (analogread > 400) //if sensor value is greater than 400 it gives signal to alaram and red led to glow
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(buzzer,LOW);
  }
  delay(100);
}
