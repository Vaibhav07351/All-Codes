//Ultrasonic_sensor

#include<LiquidCrystal.h>   //Ultrasonic sensor coorected for mean Precise measurement

int rs= 7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

int trigPin=13;
int echoPin=3;
double pingtime;
double distance;


int buttonPin=2;
int buttonValold=1;
int buttonVal=1;


double sum=0.00;
double totalmeasurements=50.00;
double meandistance;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup()             
{                                   
     pinMode(trigPin,OUTPUT);
     pinMode(echoPin,INPUT);

     pinMode(buttonPin,INPUT);
     digitalWrite(buttonPin,HIGH);
     lcd.begin(16,2);
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
    buttonVal=digitalRead(buttonPin);
    sum=0.00; 
        
    lcd.setCursor(0,0);
    
    pulseSend();
  
    pingtime= (pulseIn(echoPin,HIGH)/2) ;    // time in microseconds

    distance= 343.00 * (pingtime /10000)  + 1.43 ; 
    
    Serial.println(distance);


    

    if(buttonValold==1 && buttonVal==0)
  {
       lcd.clear(); 

       for(int i=0 ;i<totalmeasurements; i++)
       {
               pulseSend();
                    
            pingtime= (pulseIn(echoPin,HIGH)/2) ;    // time in microseconds
            distance= 343.00 * (pingtime /10000)  + 1.43 ;
            sum= sum+ (343.00 * (pingtime /10000)  + 1.43) ;    
                  
      /*                      Serial.print(i+1);
                    Serial.print("      ");
                    Serial.print("distance = ");
                    Serial.print(distance);

                    Serial.print("       sum =   ");
                    Serial.println(sum);   

      */
                            
       }

        meandistance= sum/(totalmeasurements);
        
         Serial.println(meandistance);
       
        if(meandistance<100.00)
        {  
             lcd.print("Distance (cm) = ");
             lcd.setCursor(0,1);
             lcd.print(meandistance);
        }

        if(meandistance>=100.00)
        {  
             lcd.print("Distance (m) = ");
             lcd.setCursor(0,1);
             lcd.print(meandistance/100.00);
        }

       delay(3000);
       lcd.clear(); 
   }




  else
  {
    
      lcd.print("Place the object");   
      lcd.setCursor(0,1);   
      lcd.print("Press to Measure");
      
  }




   
   delay(25);
}
