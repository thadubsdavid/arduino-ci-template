#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard, OUTPUT);
  Serial.begin(9600)
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard, HIGH);
  delay(1000);
  Serial.println("some logging");
  // put your main code here, to run repeatedly:
}