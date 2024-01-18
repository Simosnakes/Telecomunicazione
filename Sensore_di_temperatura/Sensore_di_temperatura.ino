#include <OneWire.h>
#include <DallasTemperature.h>

#define SENSOR_BUS_PIN 2

OneWire oneWire(SENSOR_BUS_PIN);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  Serial.println("DS18B20 test");
  sensors.begin();

}

void loop() {
  Serial.print("Richiesta temperaturaa...");
  sensors.requestTemperatures();
  Serial.print(sensors.getTempCByIndex(0));
  Serial.println("°C");

}
