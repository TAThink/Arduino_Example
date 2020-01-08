
int pin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  int tilt = digitalRead(pin);
  Serial.println(tilt);
  delay(100);
}
