//toggle_switch_ifelse

int redled=10;
int oldval=1;
int newval=1;
int readingPin=A3;
int readval;
int ledstate=0;

void setup()             
{                                   
     pinMode(redled,OUTPUT);
     pinMode(readingPin,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   
  readval= digitalRead(readingPin);
  oldval=readval;

 if(oldval==1&&newval==0)
 {
   if(ledstate==0)
    {digitalWrite(redled,HIGH);
     ledstate=1; 
    }

   else
   {digitalWrite(redled,LOW);
   ledstate=0;
   }
 }

 
  newval=oldval;

  Serial.println(readval);   
}
