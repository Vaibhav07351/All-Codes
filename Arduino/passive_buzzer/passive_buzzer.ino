//passive_buzzer

int passbuzz= 9;
int buzztime=1000;
int buzztime2=1000 ;

void setup()             
{                                   
     pinMode(passbuzz,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

   digitalWrite(passbuzz,HIGH);
   delayMicroseconds(buzztime2);
   digitalWrite(passbuzz,LOW);
   delayMicroseconds(buzztime2);

     
}
