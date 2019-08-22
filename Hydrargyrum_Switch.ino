int buzzer = 3;
int mercury = A0;
int value;
void setup() {
  Serial.begin(9600);
  pinMode(mercury, INPUT);
}

void loop() {
  value = analogRead(mercury);
  Serial.println(value);
  if (value < 100) {
      tone(buzzer, 5000);
  }
  else {
    noTone(buzzer);
  }
  delay(100);
}
