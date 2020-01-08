int pin = 7;

int numTones = 8;
int tones[] = {261, 294, 330, 349, 492, 440, 494, 523};

void setup() {
  pinMode(pin, OUTPUT);

}

void loop() {
  for (int i = 0; i < numTones; i++) {
    tone(pin, tones[i]);
    delay(100);
  }
  noTone(pin);

}
