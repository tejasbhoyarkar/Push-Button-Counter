int led = 12;    //  connect led with 12

void setup() 
{
  pinMode(led, OUTPUT);       // Led is output device
}
void loop() 
{
  digitalWrite(led,HIGH);    // Turn on Led
  delay(1000);               // wait for 1 second
  digitalWrite(led,LOW);     // Turn off Led
  delay(1000);               // wait for 1 second
}
