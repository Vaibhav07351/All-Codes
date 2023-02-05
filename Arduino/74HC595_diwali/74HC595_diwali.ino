//74HC595_diwali


int latchPin= 11;
int clockPin=9;
int dataPin=12;
int outputEnablePin = 5;
int counter=0;
int innercounter=0;
int inner2counter=0;
int inner3counter=0;
int inner4counter=0;
int inner5counter=0;
int delaytime=50;
int buttonPin=2;
int buttonValold=1;
int buttonVal=1;
int num=128;
int num2=255;
int LED2s=128;
int LED3s=1;
int flag=0;
//byte LEDs=0x00;
byte LEDs=B01010101;


void setup()             
{                                   
     pinMode(latchPin,OUTPUT);
     pinMode(clockPin,OUTPUT);
     pinMode(dataPin,OUTPUT); 
     pinMode(outputEnablePin, OUTPUT); 
     digitalWrite(outputEnablePin,LOW);
      
     pinMode(buttonPin,INPUT);
     
     digitalWrite(buttonPin,HIGH);
     
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
  
   if(counter==10)
   counter=0;
  
   buttonVal=digitalRead(buttonPin);

   
     if(buttonValold==1 && buttonVal==0)
    {
      counter+=1;
      num2=255;
      inner3counter=0;
      inner4counter=0;
      inner5counter=0;
      digitalWrite(outputEnablePin,LOW);
    }




    if(counter==0)              //simple all OFF always                            //this is counter 0 but  cuurently as 9 for temporary arrangement
    { 
      
        LEDs=0x00;
        ledoutput();       
    }




    if(counter==1)              //simple all ON always                        
    { 
      
        LEDs=0xFF;
        ledoutput();       
    }





    if(counter==2)                    //alternate on/off
    {
       
          if(innercounter%2==0)
          LEDs=B01010101;

          else
          LEDs=B10101010;

          
          ledoutput();

       
          delay(100);
         
       innercounter+=1;    
    }




    if(counter==3)                              //alternate : blue on / red on
    {
          if(inner2counter%2==0)
        {
          LEDs=B11110000;
          ledoutput();
          delay(100);
        }

          else
          {
          LEDs=B00001111;          
          ledoutput();
          delay(100);
          }
          
       inner2counter+=1;  
                 
    }




    if(counter==4)                   //10000000 01000000 00100000 and so on   (Single ON light from Left to Right)             
    {
       if(LED2s==0)   
       LED2s=128;

               
        
          digitalWrite(latchPin,LOW);
          shiftOut(dataPin,clockPin,LSBFIRST,LED2s);
          digitalWrite(latchPin,HIGH);    

          delay(50);
       
        
        LED2s=LED2s / 2;
            
    }


    

    if(counter==5)                   //00000001 00000010 00000100 and so on      (Single ON light from Right to Left)     
    {   
          if(LED3s==128)   
          LED3s=1;           
        
          digitalWrite(latchPin,LOW);
          shiftOut(dataPin,clockPin,LSBFIRST,LED3s);
          digitalWrite(latchPin,HIGH);    
           

          delay(50);
       
  

        LED3s= LED3s * 2 ;

          if(LED3s==128)   
         {
                     
          digitalWrite(latchPin,LOW);
          shiftOut(dataPin,clockPin,LSBFIRST,LED3s);
          digitalWrite(latchPin,HIGH);    


          delay(50);
       
         }

            
    }
    


    if(counter==6)                 //all blinking
    {
       
       if(inner5counter%2==0)
      {  LEDs=B00000000;
        ledoutput();
       
        delay(135);
      }
      
       else  
       { LEDs=B11111111;
        ledoutput();
       
        delay(135);
       }
      
       inner5counter+=1;                     
    }





  
    if(counter==7)                //00011000 00111100  01111110 11111111 and so on (LightsOn from Middle spread to full and all closes OFF back at middle)  
    {
        
       if(inner3counter==9)
       inner3counter=0;


          
          if(inner3counter==0)
          {
          LEDs=B00000000;
          ledoutput();
       
          delay(65);
          }
      
          if(inner3counter==1)         
          {
           LEDs=B00011000;
           ledoutput();
       
          delay(65);
          }
           
          if(inner3counter==2)      
          {LEDs=B00111100;
          ledoutput();
       
          delay(65);
          }
          
          if(inner3counter==3)  
          {LEDs=B01111110;
          ledoutput();
       
          delay(65);
          }
           
          if(inner3counter==4)
          {LEDs=B11111111;
          ledoutput();
       
          delay(170);
          }

//reverse

          if(inner3counter==5)
          {LEDs=B01111110;
          ledoutput();
       
          delay(65);
          }
          
          if(inner3counter==6)
          {LEDs=B00111100;
          ledoutput();
       
          delay(65);
          }
          
          if(inner3counter==7)
          {LEDs=B00011000;
          ledoutput();
       
          delay(65);
          }
          
          if(inner3counter==8) 
          {LEDs=B00000000;
          ledoutput();
       
          delay(65);
          }

          inner3counter+=1;
    }






    if(counter==8)                //                11000000 01100000 00110000  ...and so on  (2 lightsON bounce back and forth)
    {
         if(inner4counter==12)
         inner4counter=0;
      
          if(inner4counter==0)
          {
            LEDs=B11000000;
            ledoutput();
       
           delay(35);
          }
      
          if(inner4counter==1)
          {LEDs=B01100000;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==2)
          {LEDs=B00110000;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==3)
          {LEDs=B00011000;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==4)
          {LEDs=B00001100;
          ledoutput();
       
          delay(35);
          }
            
          if(inner4counter==5)
          {LEDs=B00000110;
          ledoutput();
          
          delay(35);
          }
          
          if(inner4counter==6)
          {LEDs=B00000011;
          ledoutput(); 
                   
          delay(90);
          }
//reverse

          if(inner4counter==7)
          {LEDs=B00000110;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==8)
          {LEDs=B00001100;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==9)
          {LEDs=B00011000;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==10)
          {LEDs=B00110000;
          ledoutput();
       
          delay(35);
          }
          
          if(inner4counter==11)
          {LEDs=B01100000;
          ledoutput();

          delay(35);
          }


          inner4counter+=1;
    }




  
    if(counter==9)                //dimming led     
    {
        
          
          if(num2==255)
          {
            LEDs=0x00;
            flag=0;
            analogWrite(outputEnablePin, 0);      
            ledoutput();
            delay(600);
          }
          
          else
          LEDs=0xFF;
      
          if(num2==0)
          {flag=1;
           delay(200);
                
          }
           analogWrite(outputEnablePin, num2);      
           ledoutput();

          
           if(flag==0)
           num2-=1;
           
           else
           num2+=1;
        
if(num2<=255 && num2>175 || num>=0 && num<80)
delay(8);
else
delay(4);

          
    }





      
 buttonValold=buttonVal;



}
