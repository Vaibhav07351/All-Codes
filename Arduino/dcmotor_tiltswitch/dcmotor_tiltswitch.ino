//dcmotor_tiltswitch

int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=255;
int tiltPin=2;
int tiltval;

void setup()             
{                                   
     pinMode(speedPin,OUTPUT);
     pinMode(dir1,OUTPUT);
     pinMode(dir2,OUTPUT);
     pinMode(tiltPin,INPUT);
     
     digitalWrite(tiltPin,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   tiltval=digitalRead(tiltPin);
   
   digitalWrite(dir1,HIGH);  
   digitalWrite(dir2,LOW);

   if(tiltval==1)
   analogWrite(speedPin,mSpeed);
   
   else
   analogWrite(speedPin,0);
   
   
   Serial.println(tiltval);
   
   
   }
