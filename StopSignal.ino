#define INTERRUPT_PIN 2

void setup() {
  Serial.begin(9600);

  pinMode(INTERRUPT_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(INTERRUPT_PIN), sendStop, LOW);
}

void loop() {}

void sendStop() {
  Serial.println(1);
  delay(10);
}
