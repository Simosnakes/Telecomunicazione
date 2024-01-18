#include <NewPing.h>
NewPing sonar (10, 9, 350);
int dist;

#define TRIGGER_PIN 10
#define ECHO_PIN 9

void setup() {
  Serial.begin(9600);
  delay (50);
}

void loop() {
  Serial.print("The distance is: ");
  dist = sonar.ping_cm();
  Serial.println(dist);
  delay(500);
}