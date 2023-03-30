int ledPin = 9; // LED connected to digital pin 9
int buttonPin = 2; // pushbutton connected to digital pin 2
int brightness = 0; // LED brightness level
int fadeAmount = 5; // amount to fade LED by
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    while (brightness > 0) {
      brightness = brightness - fadeAmount;
      analogWrite(ledPin, brightness);
      delay(50);
    }
  } else {
    while (brightness < 255) {
      brightness = brightness + fadeAmount;
      analogWrite(ledPin, brightness);
      delay(50);
    }
  }
}
