//servo_photosensor

#include<Servo.h>
int readingPin= A3;
int servoPin=9;
float voltage; 
float servoPos;

Servo myservo;
void setup()             
{                                   
     pinMode(readingPin,INPUT);
     myservo.attach(servoPin);
     Serial.begin(115200);
}                                                   


                                                         
void loop() 
{    
    
   voltage= analogRead(readingPin);
   
   servoPos= (180.00/1023.00)*voltage;

   myservo.write(servoPos);
   
   Serial.print("Voltage = ");
   Serial.print(voltage);
   Serial.print("        servoPos =  ");
   Serial.println(servoPos);
}
