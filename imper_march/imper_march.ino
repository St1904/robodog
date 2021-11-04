#define OUT 3

void setup() {
  // put your setup code here, to run once:
  pinMode(OUT, OUTPUT);
}

void myTone(double frequency, int toneLen, int delayLen) {
  tone(OUT, frequency, toneLen);
  delay(delayLen);
}

void quarter(double frequency) {
  myTone(frequency, 500, 600);
}

void half(double frequency) {
  myTone(frequency, 1000, 1200);
}

void eight(double frequency) {
  myTone(frequency, 200, 300);
}

void sixteenth(double frequency) {
  myTone(frequency, 100, 150);
}

void eightPoint(double frequency) {
  myTone(frequency, 400, 450);
}

void loop() {
  quarter(440);
  quarter(440);
  quarter(440);
  eightPoint(349.23);
  sixteenth(523.25);

  quarter(440);
  eightPoint(349.23);
  sixteenth(523.25);
  half(440);

  quarter(659.26);
  quarter(659.26);
  quarter(659.26);
  eightPoint(698.46);
  sixteenth(523.25);

  quarter(415.30);
  eightPoint(349.23);
  sixteenth(523.25);
  half(440);

  quarter(880);
  eightPoint(440);
  sixteenth(440);
  quarter(880);
  eightPoint(830.6);
  sixteenth(784);

  sixteenth(739.98);
  sixteenth(698.46);
  eight(739.98);
  delay(300);
  eight(466.16);
  quarter(622.26);
  eightPoint(587.32);
  sixteenth(554.36);

  sixteenth(523.25);
  sixteenth(493.88);
  eight(523.25);
  delay(300);
  eight(349.23);
  quarter(415.3);
  eightPoint(349.23);
  sixteenth(440);

  quarter(523.23);
  eightPoint(440);
  sixteenth(523.23);
  half(659.26);

  quarter(880);
  eightPoint(440);
  sixteenth(440);
  quarter(880);
  eightPoint(830.6);
  sixteenth(784);

  sixteenth(739.98);
  sixteenth(698.46);
  eight(739.98);
  delay(300);
  eight(466.16);
  quarter(622.26);
  eightPoint(587.32);
  sixteenth(554.36);

  sixteenth(523.25);
  sixteenth(493.88);
  eight(523.25);
  delay(300);
  eight(349.23);
  quarter(415.3);
  eightPoint(349.23);
  sixteenth(523.25);

  quarter(440);
  eightPoint(349.23);
  sixteenth(523.25);
  half(440);
}
