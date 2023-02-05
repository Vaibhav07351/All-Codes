//switch_led_brightness

int switch1= 13;
int switch2= 10;
int redled=  3;
int passbuzz = 2;
int readingPin1=A3;
int readingPin2=A5;
int ledbrightness=0;
int switch1val;
int switch2val; 


void setup()             
{                                   
     pinMode(switch1,OUTPUT);
     pinMode(switch2,OUTPUT);
     pinMode(redled,OUTPUT);
     pinMode(passbuzz,OUTPUT);
     pinMode(readingPin1,INPUT);
     pinMode(readingPin2,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
    
   switch1val=digitalRead(readingPin1);
   switch2val=digitalRead(readingPin2);

   if(switch1val==0)
   {
       if(ledbrightness<=240)   
        ledbrightness+=15;     
   }

   if(switch2val==0)
   {
      if(ledbrightness>=15)   
       ledbrightness-=15;
   }

       if(ledbrightness==0 || ledbrightness==255)
       digitalWrite(passbuzz,HIGH);
       else
       digitalWrite(passbuzz,LOW);   


   analogWrite(redled,ledbrightness);


   Serial.print("Switch1 value = ");
   Serial.print(switch1val);
   Serial.print("       Switch2 value = ");
   Serial.print(switch2val);
   Serial.print("         ledbrigheness= ");
   Serial.println(ledbrightness);
    
}
