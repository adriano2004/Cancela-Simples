#include <Servo.h>

Servo servo1;
int bot=7;
int val;


void setup(){
  servo1.attach(4);
    pinMode(bot, INPUT);
}

void loop(){
    val = digitalRead(bot);
    servo1.write(0);
    if( val ==1){
    servo1.write(90);
      delay(5000);
      servo1.write(0);
    }
}
