//potentiometer___passive_buzzer

int readingPin=A3;
int passbuzz=10;
float voltage=00.00;
float delaytime=00.00;
void setup()             
{                                   
     pinMode(readingPin,INPUT);
     pinMode(passbuzz,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

   voltage= analogRead(readingPin);

   delaytime= 1.00 + (9./1023.)*voltage;

   digitalWrite(passbuzz,HIGH);
   delay(delaytime);
   digitalWrite(passbuzz,LOW);
   delay(delaytime);


 //  Serial.print("Voltage = ");
  // Serial.print(voltage );
   //Serial.print("        Delaytime = ");
//   Serial.println(delaytime);   
  
}
