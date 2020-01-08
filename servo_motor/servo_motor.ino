#include <Servo.h> // 서보 모터 라이브러리
Servo servo;
int angle = 0; // 0~180도

int pin = 7;

void setup() {
  servo.attach(pin);
  Serial.begin(9600);
}

void loop() {
  servo.write(angle);
}
