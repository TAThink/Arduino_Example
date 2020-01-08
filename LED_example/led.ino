int pin=A0;  // 핀 번호

int val=0;  //
void setup() 
{ 
  Serial.begin(9600); //set baud rate as 9600 
} 
void loop() 
{ 
  val = analogRead(pin);//read analog 
  Serial.println(val); 
  delay(100); //delay 0.01 s 
}
