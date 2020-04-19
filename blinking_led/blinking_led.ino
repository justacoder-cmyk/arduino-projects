const int redLED = 13; // Defining our red LED for pin 13 on our Arduino.
void setup() { // This is setup, which it will do only once.
  pinMode(redLED, OUTPUT); // Makes the pin an output

}

void loop() { // This is a loop, which will loop our code.
  digitalWrite(redLED, HIGH); // Tells pin to use HIGH
  delay(1000); // Delay in milliseconds before next code
  digitalWrite(redLED, LOW); // Tells pin to use LOW
  delay(1000);// Delay in milliseconds before next code
}
