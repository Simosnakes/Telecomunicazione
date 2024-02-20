//bitSet(Val, Posizione)
//Val, dichiarata come bit
//Setta a livello logico alto uno dei bit

int SER = 8;
int Rclk = 9;
int SRclk = 10;
byte dato = 0;

void setup(){
  pinMode(SER, OUTPUT);
  pinMode(Rclk, OUTPUT);
  pinMode(SRclk, OUTPUT);
}

void loop(){
  dato = 0;
  ShiftRegister();
  for(int k = 0; k < 7; k++){
    bitSet(dato, k);
    ShiftRegister();
    delay(500);
  }
}

void ShiftRegister(){
  digitalWrite(Rclk, LOW);
  shiftOut(SER, SRclk, MSBFIRST, dato);
  digitalWrite(Rclk, HIGH);
}