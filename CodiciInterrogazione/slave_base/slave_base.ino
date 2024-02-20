#include <Wire.h>
//SLAVE

void setup()
{
  Wire.begin(7);
  Wire.onRequest(rispondi);
}

void loop()
{
  delay(1000);
}

void rispondi()
{
    Wire.write("ciao sono slave");
}
