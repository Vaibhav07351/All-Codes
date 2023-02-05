int latchPin= 11;     //shift to right
int clockPin=9;
int dataPin=12;
int counter=0;
int outputEnablePin = 5;
byte LEDs=B00011000;

void setup()             
{                                   
     pinMode(latchPin,OUTPUT);
     pinMode(clockPin,OUTPUT);
     pinMode(dataPin,OUTPUT);  
     pinMode(outputEnablePin, OUTPUT); 
     digitalWrite(outputEnablePin,LOW);
 
     Serial.begin(9600);
}                                                   


void ledoutput()
{
          digitalWrite(latchPin,LOW);
          shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
          digitalWrite(latchPin,HIGH);
          
}

                                                         
void loop() 
{

  
  ledoutput();
 

   
 //all shift to left (lsb empty now,and msb shifts to nowhere)   +  msb shift to lsb
 
  LEDs=LEDs*2   + LEDs/128;           //shift to left 


         
//all shift to right (msb empty now, lsb shifts to nowhere)   +  lsb shift to msb
    
//  LEDs=LEDs/2 + LED*128 ;          //shift to right 


 
  
  

 delay(100);



 
  
}
