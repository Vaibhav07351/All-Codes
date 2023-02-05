//stepper_motor_and_switch

#include<Stepper.h>    //this pogram changes direction of stepper motor every time the button is pressed
int stepsPerRevolution=2048;                       //changed here  or 30try
int motorSpeed=12;  //changed here
int delaytime=50;
int buttonPin=2;
int buttonValold=1;
int buttonVal=1;
int flag=0;
int steps=0;
int copy;
Stepper myStepper(stepsPerRevolution,8,10,9,11);

void setup()             
{                                   
     pinMode(buttonPin,INPUT);
     myStepper.setSpeed(motorSpeed);
     digitalWrite(buttonPin,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{ 
  if(copy==2048)
   {steps=0;
    copy=0;
   }
  if(copy==-2048)
   {steps=0;
   copy=0;
   } 
   buttonVal=digitalRead(buttonPin);
      Serial.println(buttonVal);
   
  if(buttonValold==1 && buttonVal==0)
  {
       if(flag==1)
       { steps=-steps;
         flag=0;  
       }

       else
       {  steps=-steps;
          flag=1; 
       }
  }


 else
 {
          if(flag==1) 
        {
             myStepper.step(copy);
             copy=steps-1;
        }  


          if(flag==0) 
        {
            myStepper.step(copy);
            copy=steps+1;
        }  
   
 }

 buttonValold=buttonVal;



}
