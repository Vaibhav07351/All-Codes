//tiltswitch

int tiltswitch=2;
int redled=7;
int greenled=10;
int switchval;

void setup()             
{                                   
     pinMode(tiltswitch,INPUT);
     pinMode(redled,OUTPUT);
      pinMode(greenled,OUTPUT);
     digitalWrite(tiltswitch,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   
   switchval=digitalRead(tiltswitch);
   Serial.println(switchval);

   if(switchval==0)
   {
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
   }
   
   if(switchval==1)
   {
    digitalWrite(greenled,LOW);
    digitalWrite(redled,HIGH);
   }
   
}
