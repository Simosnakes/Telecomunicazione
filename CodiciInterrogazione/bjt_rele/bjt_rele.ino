int Pin = 13;
  
void setup()
{
  pinMode(Pin, OUTPUT);
}

void loop()
{
  digitalWrite(Pin, HIGH);
  delay(3000); 
  digitalWrite(Pin, LOW);
  delay(3000); 
}