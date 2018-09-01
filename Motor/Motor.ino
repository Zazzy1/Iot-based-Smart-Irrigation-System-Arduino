int relay_pin = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(relay_pin,OUTPUT);
}
void loop()
{
  digitalWrite(relay_pin,HIGH);
  delay(2000);
  digitalWrite(relay_pin,LOW);
  delay(2000);
}

