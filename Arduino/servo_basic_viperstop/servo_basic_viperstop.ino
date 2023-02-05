//servo_basic_viperstop

#include<Servo.h>
int servoPin=9;
int servoPos=0;
int angle;

  int i=0;
  int j=180;

Servo myservo;
void setup()             
{                                   
     myservo.attach(servoPin);
     Serial.begin(115200);
}                                                   


                                                         
void loop() 
{  

   
  Serial.print("Enter angle :    " );
 while(Serial.available()==0){
    if(j==0)
   {
    j=180;
    i=0;
   }

  
 if(i<180){
  myservo.write(i);
  delay(8);
  i++;
  }
  
 else
  {myservo.write(j);
  delay(8);
  j--;    
  }

 }

  servoPos=Serial.parseInt();  
  Serial.println(servoPos);

Serial.println(i);
Serial.println(j);  
if(i<180&&i>servoPos)
{
  for(i;i<180;i++)
    {
     myservo.write(i);
     delay(8);
    }
}


 
 if(j<180&&j<servoPos)//(j>servoPos)
  {  
    for(j;j>0;j--)
     {
        myservo.write(j);
        delay(8);
     }
   
  }

    if(j==0)
   {
    j=180;
    i=0;
   }


 if(i<180&&i<servoPos){
   
    for(i;i<=servoPos;i++)
    {
     myservo.write(i);
     delay(8);
    }
  
}

 if(j<180&&j>servoPos || i==180)//(j>servoPos)
  {  
       for(j;j>=servoPos;j--)
      {
           myservo.write(j);
           delay(8);
      }
  }



delay(2000);
    
}
