#include <Wire.h>
//MASTER
void setup()
{
  Serial.begin(9600);
  Wire.begin();
}

void loop()
{
  Wire.requestFrom(7, 15);//15 indica il numero di byte che formano la stringa
  while(Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();
}
