// 026 - STAZIONE METEO - 100 PROGETTI CON ARDUINO UNO - WWW.PEOPLEM.COM BY VITO PULPITO
//------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------
//INCLUDIAMO LE LIBRERIE UTILIZZATE DAL PROGRAMMA
#include "i2c_BMP280.h"
#include "U8glib.h"

//CREIAMO GLI OGGETTI
BMP280 Sensore_1;
U8GLIB_SSD1306_128X64 Display(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

//DICHIARIAMO LE VARIABILI E LE COSTANTI
float Pressione;
float Temperatura;


//------------------------------------------------------------------------------------------------
void setup() {
  Serial.begin(9600);
  Sensore_1.setEnabled(0);
  Sensore_1.triggerMeasurement();
  Serial.println("STAZIONE METEO");
  
  if(Sensore_1.initialize()){
    Serial.println("Sensore barometrico trovato");
   }
   
  Display.firstPage(); //Pagina Logo Iniziale
  do{
    draw_1();
  }
  while(Display.nextPage());
  delay(5000);
 }
//------------------------------------------------------------------------------------------------
void loop() {
  Sensore_1.awaitMeasurement();
  
  Display.firstPage(); //Pagina Temperatura
  do{
    draw_2();
   }
  while(Display.nextPage());
  delay(2000);
  Display.firstPage(); //Pagina Pressione
  do{
    Pressione = draw_3();
   }
  while(Display.nextPage());
  delay(2000);
  Display.firstPage(); //Pagina Previsioni Meteo
  do{
    draw_4(Pressione);
   }
  while(Display.nextPage());
  delay(3000);
 }
