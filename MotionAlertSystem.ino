int pirPin = 2; // PIR sensor connected to digital pin 2
int ledPin = 13; // LED connected to digital pin 13
int buzzerPin = 9; // Buzzer connected to digital pin 9

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000); // Sound buzzer
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}
