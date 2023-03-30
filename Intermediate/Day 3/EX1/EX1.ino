void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LDR_PIN);  // Read analog value
  float percentage = map(sensorValue, 0, 1023, 0, 100);  // Convert to percentage
  Serial.print("Light Level: ");
  Serial.print(percentage);
  Serial.println("%");
}
