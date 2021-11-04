#define FIRST  2
#define LAST   12
#define IN     A5

void setup() {
  for (int i = FIRST; i <= LAST; i++)
    pinMode(i, OUTPUT);
  pinMode(IN, INPUT);
}

void loop() {
  int val = analogRead(IN);
  int lastLight = map(val, 0, 1023, 1, 12);
  for (int i = FIRST; i <= LAST; i++) {
    if (i > lastLight)
      digitalWrite(i, HIGH);
    else
      digitalWrite(i, LOW);
  }
}
