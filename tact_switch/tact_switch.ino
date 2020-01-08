
int pin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  Serial.println(digitalRead(pin));
  delay(10);
}