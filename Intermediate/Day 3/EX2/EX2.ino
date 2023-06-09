int ldrPin = A0; // LDR sensor connected to A0 pin
int ledPin = 9; // LED connected to pin 9

void setup() {
  Serial.begin(9600); // initialize Serial Monitor
  pinMode(ledPin, OUTPUT); // set LED pin as output
}

void loop() {
  int ldrValue = analogRead(ldrPin); // read LDR value
  int brightness = map(ldrValue, 0, 1023, 0, 255); // convert to brightness level
  analogWrite(ledPin, brightness); // set LED brightness
  Serial.print("Light Level: ");
  Serial.println(ldrValue);
  delay(100); // wait for 100ms before taking another reading
}
