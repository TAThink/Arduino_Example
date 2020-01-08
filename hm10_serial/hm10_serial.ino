#include <SoftwareSerial.h>

#define rx 2 // pin
#define tx 3 
//아두이노	rx]---[tx HM10
//			tx]---[rx HM10

SoftwareSerial HM10(rx, tx);

unsigned char data;

void setup() {
  Serial.begin(9600);
  HM10.begin(9600);
}

void loop() {

  if(HM10.available()) { // HM10 에서 받은 데이터가 있을 경우
	  data = HM10.read ( ); // 데이터를 읽어 들여 할당한다.
	  Serial.write ( data );
	  if ( data == 1 ) {
		  Serial.println ( "hello??" );
	  }
  }
  
}
