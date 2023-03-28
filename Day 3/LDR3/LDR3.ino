/*
 In this code, the brightness of LED 1 is set based on the LDR 
 reading, while the brightness of LED 2 is set as the complement
 of the brightness of LED 1 (i.e. if LED 1 is at 50% brightness,
 LED 2 will be at 50% as well, but with the opposite polarity). 
 This creates an effect where the two LEDs appear to get brighter
 and dimmer in opposite directions as the light level changes.
 
 */
int ldrPin = A0; // LDR sensor connected to A0 pin
int ledPin1 = 9; // LED 1 connected to pin 9
int ledPin2 = 10; // LED 2 connected to pin 10

void setup() {
  Serial.begin(9600); // initialize Serial Monitor
  pinMode(ledPin1, OUTPUT); // set LED 1 pin as output
  pinMode(ledPin2, OUTPUT); // set LED 2 pin as output
}

void loop() {
  int ldrValue = analogRead(ldrPin); // read LDR value
  int brightness1 = map(ldrValue, 0, 1023, 0, 255); // convert to brightness level for LED 1
  int brightness2 = 255 - brightness1; // calculate brightness level for LED 2
  analogWrite(ledPin1, brightness1); // set brightness for LED 1
  analogWrite(ledPin2, brightness2); // set brightness for LED 2
  Serial.print("Light Level: ");
  Serial.println(ldrValue);
  delay(100); // wait for 100ms before taking another reading
}
