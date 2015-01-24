int THRESHOLD = 300.0;

/* The number of times the tripwire has been triggered */
unsigned long count;

void setup(void) {
  Serial.begin(14400);
  count = 0L;
}

void loop(void) {
  int sensorValue = analogRead(A0);

  if (sensorValue < THRESHOLD) {
    count = count + 1;
    Serial.print("Detected a trigger! Total triggers: ");
    Serial.println(count);
  }
  delay(100);
}
