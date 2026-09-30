// LED Blink v1.0 - final version
const uint8_t LED_PIN = 8;
const unsigned long INTERVAL_MS = 1000;
unsigned long previousMs = 0;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println(F("LED blink v1.0 started"));
}

void loop() {
  unsigned long now = millis();
  if (now - previousMs >= INTERVAL_MS) {
    previousMs = now;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? F("LED ON") : F("LED OFF"));
  }
}
