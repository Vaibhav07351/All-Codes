//74HC595_bit_flipper

int latchPin= 11;     //bit flipper
int clockPin=9;
int dataPin=12;
int counter=0;
int outputEnablePin = 5;
byte LEDs=B00000001;

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
 

   
 Serial.println(LEDs);
 
 LEDs=255-LEDs;        
  
  
 delay(500);


  
}
