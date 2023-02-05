//dcmotor

int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=255;
int i=0;

void setup()             
{                                   
     pinMode(speedPin,OUTPUT);
     pinMode(dir1,OUTPUT);
     pinMode(dir2,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   /*
   if(i==255)
   i=0;
     digitalWrite(dir1,LOW);  
   digitalWrite(dir2,HIGH);
  analogWrite(speedPin,i);
  i++ ;
  Serial.println(i);*/
   digitalWrite(dir1,HIGH);  
   digitalWrite(dir2,LOW);
   
   analogWrite(speedPin,mSpeed);
   delay(3000);
   analogWrite(speedPin,0);
   delay(3000);
   digitalWrite(dir1,LOW);  
   digitalWrite(dir2,HIGH);
   
   analogWrite(speedPin,mSpeed);
   delay(3000);
   analogWrite(speedPin,0);
   delay(3000);
   }
