# Potentiometer
가변저항 예제코드

회로도
![](./potentiometer.png)

에제 코드

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int val  = analogRead(A5); // 0~1024 까지 아날로그 값
  Serial.println(val);
}
```
