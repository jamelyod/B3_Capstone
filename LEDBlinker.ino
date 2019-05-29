const int inPin = 13; //connect Rx to 13 and GND
int motorPin = 3;
int val = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //using on-board LED
  pinMode(inPin, INPUT); //input from Rx
}

void loop() {
  val = digitalRead(inPin); //returns HIGH or LOW
  digitalWrite(LED_BUILTIN, val);
  digitalWrite(motorPin, HIGH);
}

