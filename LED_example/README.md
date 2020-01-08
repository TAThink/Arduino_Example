# LED_example
LED 예제

회로도
![](./800px-LED.png)

예제코드 
```cpp
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
}
```