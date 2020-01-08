# tilt switch
기울기 센서

예제 코드

```cpp
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
```
