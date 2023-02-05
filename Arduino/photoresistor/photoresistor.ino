//photoresistor

int readingPin=A3;
int greenled=12;
int blueled=8;
int redled=4;
float voltage=00.00;

void setup()             
{                                   
     pinMode(readingPin,INPUT);
     pinMode(greenled,OUTPUT);
     pinMode(blueled,OUTPUT);
     pinMode(redled,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

   voltage= analogRead(readingPin);

   if(voltage>0&&voltage<100)
   {
     digitalWrite(greenled,LOW);
     digitalWrite(blueled,LOW);
     digitalWrite(redled,HIGH);
     
   }

   if(voltage>100&&voltage<600)
   {
     digitalWrite(greenled,LOW);
     digitalWrite(blueled,HIGH);
     digitalWrite(redled,LOW);
     
   }
   
   if(voltage>600&&voltage<1023)
   {
     digitalWrite(greenled,HIGH);
     digitalWrite(blueled,LOW);
     digitalWrite(redled,LOW);
     
   }





   Serial.println(voltage);
  // delay(500);
}
