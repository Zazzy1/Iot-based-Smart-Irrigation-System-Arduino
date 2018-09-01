#include <dht.h>
#define dht_apin A0
int pin=A2;
int value=0;
dht DHT;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  DHT.read11(dht_apin);
  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("temperature=");
  Serial.print(DGT.temperature);
  Serial.println("C ");
  value=analogRead(pin);
  Serial.println("LDR=");
  Serial.println(value);
  int sensorValue = analogRead(A3);
  Serial.println('Soil Moisture=");
  Serial.println(sensorValue);
  delay(2000);
}

