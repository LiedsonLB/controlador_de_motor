#include <Servo.h>

Servo myservo;
Servo myservo2;

int pos = 0;

void setup()
{
  myservo.attach(9);
  myservo2.attach(10);
}

void loop()
{
  for (pos=0; pos<=180; pos+=1){
    myservo.write(pos);
    myservo2.write(pos);
    delay(15);
  }
  for (pos=180; pos>=0; pos-=1){
    myservo.write(pos);
    myservo2.write(pos);
    delay(15);
  }

}