

#include<Servo.h>

Servo neck_yes;
Servo neck_No;
Servo Rshoulder;
Servo RElbow;
Servo Lshoulder;
Servo LElbow;


void setup() 
{
  neck_yes.attach(22);
  neck_No.attach(23);
  Rshoulder.attach(24);
  RElbow.attach(25);
  Lshoulder.attach(26);
  LElbow.attach(27);
}

void loop() 
{
   neck_yes.write(20);
   neck_No.write(40);
   Rshoulder.write(50);
   RElbow.write(10);
   Lshoulder.write(105);
   LElbow.write(170);
   
  delay(5000);

  neck_yes.detach();
   neck_No.detach();
   Rshoulder.detach();
   RElbow.detach();
   Lshoulder.detach();
   LElbow.detach();
}
