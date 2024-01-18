/*
  Progetto 7: Creazione di un Gioco a quiz basato su macchina a stati
  Creato 14 Mag 2020
  da Andrea Primavera
*/

// Include il codice di libreria:
#include <LiquidCrystal.h>

// Inizializza la liberia associando i PIN dell'interfaccia 
// LCD ai quali è connesso Arduino
const int rs = 11;
const int en = 10;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// Pulsanti
int pinButton1 = 13;
int pinButton2 = 12;
// Stato (macchina a stati)
int state      = 0; 

void setup() {
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
  // Definisce il numero di righe e colonne del display LCD
  lcd.begin(16, 2);
  
  // Stampa il messaggio di benvenuto.
  lcd.setCursor(0,0);
  lcd.print("Chi vuole essere");
  lcd.setCursor(0,1);
  lcd.print("milionario?");
  delay(3000);
}

void loop() 
{
  int valButton1 = digitalRead(pinButton1);
  int valButton2 = digitalRead(pinButton2);

  if(state==0)
  {
    // Stampa la prima domanda.
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Chi ha scoperto");
    lcd.setCursor(0,1);
    lcd.print("l'america?");
    delay(3000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("1) Magellano");
    lcd.setCursor(0,1);
    lcd.print("2) Colombo");
    state = 1;
  }
  else if(state==1)
  {
    if(valButton1==HIGH)
    {
      // Risposta Errata
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Risposta");
      lcd.setCursor(0,1);
      lcd.print("Errata");
      delay(1000);
      state = 0;
    }
    if(valButton2==HIGH)
    {
      // Risposta Corretta
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Risposta");
      lcd.setCursor(0,1);
      lcd.print("Corretta");
      delay(1000);
      state = 2;
    }
  }
  else if(state==2)
  {
    // Stampa la seconda domanda.
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Di quale popolo");
    lcd.setCursor(0,1);
    lcd.print("era Re Hammurabi?");
    delay(3000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("1) Babilonesi");
    lcd.setCursor(0,1);
    lcd.print("2) Sumeri");
    state = 3;
  }
  else if(state==3)
  {
    if(valButton1==HIGH)
    {
      // Risposta Errata
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Risposta");
      lcd.setCursor(0,1);
      lcd.print("Corretta");
      delay(1000);
      state = 4;
    }
    if(valButton2==HIGH)
    {
      // Risposta Corretta
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Risposta");
      lcd.setCursor(0,1);
      lcd.print("Errata");
      delay(1000);
      state = 0;
    }
  }
  else if(state==4)
  {
    // Fine gioco
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("HAI VINTO!!");
  }
}