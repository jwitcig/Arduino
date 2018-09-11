int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;


void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void clearDisplay() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void display0() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
}

void display1() {
   digitalWrite(c, HIGH);
   digitalWrite(g, HIGH);
}

void display2() {
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
}

void display3() {
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(b, HIGH);
}

void display4() {
   digitalWrite(e, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(c, HIGH);
}

void display5() {
   digitalWrite(f, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(b, HIGH);
}

void display6() {
   digitalWrite(f, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(a, HIGH);
}

void display7() {
   digitalWrite(f, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(g, HIGH);
}

void display8() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
}

void display9() {
   digitalWrite(f, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(d, HIGH);
}

void cycle() {
   digitalWrite(a, HIGH);
   delay(2000);
   digitalWrite(b, HIGH);
   delay(2000);
   digitalWrite(c, HIGH);
   delay(2000);
   digitalWrite(d, HIGH);
   delay(2000);
   digitalWrite(e, HIGH);
   delay(2000);
   digitalWrite(f, HIGH);
   delay(2000);
   digitalWrite(g, HIGH);
   delay(2000);
}

void loop() {
    clearDisplay();
    display0();
    delay(1200);
    clearDisplay();
    display1();
    delay(1200);
    clearDisplay();
    display2();
    delay(1200);
    clearDisplay();
    display3();
    delay(1200);
    clearDisplay();
    display4();
    delay(1200);
    clearDisplay();
    display5();
    delay(1200);
    clearDisplay();
    display6();
    delay(1200);
    clearDisplay();
    display7();
    delay(1200);
    clearDisplay();
    display8();
    delay(1200);
    clearDisplay();
    display9();
    delay(1200);
    clearDisplay();
}
