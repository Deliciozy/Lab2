#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(A0);
  float voltage = raw * 3.3 / 4095.0;

  Serial.print("ADC raw = ");
  Serial.print(raw);
  Serial.print(" , Voltage = ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);
}
