// LED Blink - Version 0.1 (initial version, contains intentional QA defects)
// Board: Arduino Uno

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
