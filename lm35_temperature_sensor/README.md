# temperature_sensor
아두이노 온도센서 (LM35) 예제 코드

예제코드 미리보기
```cpp
int output = A0; // 아날로그

void setup() {
  analogReference(INTERNAL); 
  // analogReference : 아날로그 입력에 사용되는 참조 전압(즉, 입력 범위의 최댓값이 되는 전압)을 설정합니다.
  // INTERNAL: 내장 참조 전압, ATmega168 또는 ATmega328P에서 1.1V, ATmega8에서는 2.56V (아두이노 메가에서는 사용 불가)
  Serial.begin(9600);

}

void loop() {
  int reading = analogRead(output); // 센서 값 받기
  float temperature = reading / 9.31;
  Serial.println(temperature);
  
  delay(1000);
}
```
