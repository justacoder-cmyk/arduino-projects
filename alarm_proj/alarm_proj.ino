const int alarmLED = 13;
void setup() {
  pinMode(alarmLED, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(alarmLED, HIGH);
  delay(100);
  digitalWrite(alarmLED, LOW);
  delay(100);
    digitalWrite(alarmLED, HIGH);
  delay(100);
  digitalWrite(alarmLED, LOW);
  delay(100);
    digitalWrite(alarmLED, HIGH);
  delay(100);
  digitalWrite(alarmLED, LOW);
  delay(100);
    digitalWrite(alarmLED, HIGH);
  delay(100);
  digitalWrite(alarmLED, LOW);
  delay(100);
  digitalWrite(alarmLED, HIGH);
  delay(50);
  digitalWrite(alarmLED, LOW);
  delay(5000);
  
  // put your main code here, to run repeatedly:

}
