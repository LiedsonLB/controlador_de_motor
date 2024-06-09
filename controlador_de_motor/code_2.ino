#include <Servo.h>

Servo myservo;
Servo myservo2;

int potpin = A0;
int val;
int val2;
  
void setup() {
  myservo.attach(9);
  myservo2.attach(10);
}

void loop(){
val  = analogRead(potpin);
val = map(val, 0, 1023, 180, 0);
val2 = analogRead(potpin);
val2 = map(val2, 0, 1023, 90, 0);
myservo.write(val);
myservo2.write(val2);
delay(15);
  
}