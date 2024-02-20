int puls1 = 13;
int luce1 = 2;
int stato1 = LOW;
int attesaDebounce = 50;
unsigned long ultimoTempoDebounce = 0;
int ultimaLettura = LOW;

void setup()
{
  pinMode(luce1, OUTPUT);
  pinMode(puls1, INPUT);
}

void loop()
{
  int lettura = digitalRead(puls1);  // (int lettura = Variabile locale) leggo lo stato del pulsante
  if(lettura != ultimaLettura){            // se lo stato del pin è il contrario dell`ultima lettura
    ultimoTempoDebounce = millis();        // assegno il conteggio in millisecondi
  }
  if((millis() - ultimoTempoDebounce) > attesaDebounce){   // se il conteggio è superiore a 50 millisecondi
    if(lettura != puls1 and lettura == HIGH){      // se il pin7 è diverso dallo stato del pulsante e il pulsante è premuto
      stato1 = !stato1;                                // cambio lo stato del pin 13
      digitalWrite(luce1, stato1);                      // Imposto al pin13 lo stato di ledStato
    }
    stato1 = lettura;                               // assegno lo stato del pulsante al pin7
  }
  ultimaLettura = lettura;
  delay(100);
}