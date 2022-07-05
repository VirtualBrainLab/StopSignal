const byte interruptPin = 2;

void setup() {
  Serial.begin(9600);

  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), sendStop, LOW);
}

void loop() {}

void sendStop() {
  Serial.println(1);
  delay(10);
}
