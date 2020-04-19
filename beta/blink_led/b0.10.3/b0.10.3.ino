const int LED13 = 13;
const int LED12 = 12; 
const int LED11 = 11; 
const int LED10 = 10;
const int LED9 = 9;
const int LED8 = 8;
const int LED7 = 7;
const int LED6 = 6;
const int LED5 = 5;
const int LED4 = 4;
void setup() { 
  pinMode(LED13, OUTPUT); 
  pinMode(LED12, OUTPUT); 
  pinMode(LED11, OUTPUT); 
  pinMode(LED10, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() { 
  digitalWrite(LED4, LOW);
  digitalWrite(LED13, HIGH);
  delay(1000);
  digitalWrite(LED13, LOW);
  digitalWrite(LED12, HIGH);
  delay(1000);
  digitalWrite(LED12, LOW);
  digitalWrite(LED11, HIGH);
  delay(1000);
  digitalWrite(LED11, LOW);
  digitalWrite(LED10, HIGH);
  delay(1000);
  digitalWrite(LED10, LOW);
  digitalWrite(LED9, HIGH);
  delay(1000);
  digitalWrite(LED9, LOW);
  digitalWrite(LED8, HIGH);
  delay(1000);
  digitalWrite(LED8, LOW);
  digitalWrite(LED7, HIGH);
  delay(1000);
  digitalWrite(LED7, LOW);
  digitalWrite(LED6, HIGH);
  delay(1000);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, HIGH);
  delay(1000);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(1000);

}
