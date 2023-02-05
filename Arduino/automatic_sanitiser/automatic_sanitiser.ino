#include<Servo.h>

int ledpin=13;
int trigPin=6;
int echoPin=5;
double pingtime;
double distance;

double sum=0.00;
double totalmeasurements=50.00;
double meandistance;

int servoPin=9;
int angle=0;


Servo myservo;


void setup() 
{
     pinMode(ledpin,OUTPUT); 
     pinMode(trigPin,OUTPUT);
     pinMode(echoPin,INPUT);

     myservo.attach(servoPin);

     Serial.begin(9600); 
}

void pulseSend()
{
   digitalWrite(trigPin,LOW);
   delayMicroseconds(10);
   digitalWrite(trigPin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
     
}


void loop()
{
   
    pulseSend();
  
    pingtime= (pulseIn(echoPin,HIGH)/2) ;    // time in microseconds

    distance= 343.00 * (pingtime /10000)  + 1.43 ;



     Serial.print(distance);
    Serial.print("   ");
    Serial.println(angle);

     
    angle=0;
    myservo.write(angle);
   

    if(distance<15)
    {angle=180;
      myservo.write(angle);
          Serial.print(distance);
    Serial.print("   ");
    Serial.println(angle);

     delay(2000);
    }

}
