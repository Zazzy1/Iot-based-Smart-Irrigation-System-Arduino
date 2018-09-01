int pin=A0;
int value=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  value=analogRead(pin);
  Serial.println(value);
  delay(100);
}

