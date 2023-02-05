//stepper_motor

#include<Stepper.h>
int stepsPerRevolution=2048;                       //changed here  or 30try
int motorSpeed=10;  //changed here
int delaytime=50;
int readingpin=A0;
float val;
Stepper myStepper(stepsPerRevolution,8,10,9,11);

void setup()             
{                                   
     pinMode(readingpin,INPUT);
     myStepper.setSpeed(motorSpeed);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
  
   myStepper.step(stepsPerRevolution);
   
   delay(1000);

  myStepper.step(-stepsPerRevolution);

  delay(1000);
   
}
