/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>


Servo neck_yes;
Servo neck_No;
Servo Rshoulder;
Servo RElbow;
Servo Lshoulder;
Servo LElbow;  
int pos = 0; 

void setup() {
  neck_yes.attach(22);
  neck_No.attach(23);
  Lshoulder.attach(26);
  LElbow.attach(27);
  RElbow.attach(25);
  Rshoulder.attach(24);
  neck_yes.write(20);
   neck_No.write(40);
   Rshoulder.write(50);
   RElbow.write(10);
   Lshoulder.write(100);
   LElbow.write(170);
  
  //Initializing handshake position
  for(int pos1 = 170, pos =10; pos< 140; pos++, pos1-- ){
    if(pos>=50 && pos<=90){
      Rshoulder.write(pos);
    }
    if(pos>=100 && pos<=140){
      Lshoulder.write(pos);
    }
    if(pos1<=170 && pos1>=140){
      LElbow.write(pos1);
    }
  }
  neck_No.write(50);
  delay(2500);
}

void loop() {

  int i;
 for(i=0;i<3;i++)
 {
  for (pos = 0; pos <= 70; pos += 1) { 
    // in steps of 1 degree
    RElbow.write(pos); 
    delay(15);                       
  }
  for (pos = 70; pos >= 0; pos -= 1) { 
    RElbow.write(pos);               
    delay(15);                       
  }
}

//Relaxing
  neck_yes.write(20);
   neck_No.write(40);
   Rshoulder.write(50);
   RElbow.write(10);
   Lshoulder.write(100);
   LElbow.write(170);
   
  delay(5000);

  neck_yes.detach();
   neck_No.detach();
   Rshoulder.detach();
   RElbow.detach();
   Lshoulder.detach();
   LElbow.detach();
}
