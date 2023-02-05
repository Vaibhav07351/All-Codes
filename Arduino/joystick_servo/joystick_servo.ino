//joystick_servo

#include<Servo.h>
int xPin=A0;
int yPin=A2;
int switchPin=2;
float xval;
float yval;
int switchval;
int servo1Pin=12;
int servo2Pin=9;
float servo1Pos=90;
float servo2Pos=90;
int buzzpin=6;

Servo servo1  , servo2  ;

void setup()             
{      
     pinMode(xPin,INPUT);
     pinMode(yPin,INPUT);
     pinMode(switchPin,INPUT);
     servo1.attach(servo1Pin);
     servo2.attach(servo2Pin);                          
     pinMode(buzzpin,OUTPUT);

     digitalWrite(switchPin,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   
   xval= analogRead(xPin);
   yval= analogRead(yPin);
   switchval=digitalRead(switchPin);

   servo1Pos = 90. - (90./515.)*(xval-508.);
   servo2Pos = 90. + (90./507.)*(yval-516.);

   servo1.write(servo1Pos);
   servo2.write(servo2Pos);

   if(switchval==0)
   digitalWrite(buzzpin,HIGH);
   else
   digitalWrite(buzzpin,LOW);


   Serial.print("xval = ");
   Serial.print( xval );
   Serial.print("   yval = ");
   Serial.print(yval );
   Serial.print("   Switchval = ");
   Serial.print(switchval);
   Serial.print("   Servo1Pos = ");
   Serial.print(    servo1Pos );
   Serial.print("   Servo2Pos = ");
   Serial.println(    servo2Pos);
   
}
