int ledPin = 9; // LED connected to digital pin 9
int buttonPin = 2; // pushbutton connected to digital pin 2
int buttonState = 0; // variable to store the button state
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
