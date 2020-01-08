# tact_switch
텍트 스위치 예제 코드

회로도
![](./tact_switch.png)

예제 코드

```cpp
int pin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  Serial.println(digitalRead(pin));
  delay(10);
}
```
