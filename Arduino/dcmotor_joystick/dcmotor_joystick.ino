//dcmotor_joystick

int speedPin=11;                     //DC motor and joystick
int dir1=4;
int dir2=3;
int mSpeed=255;
int yPin=A2;
float xval;
float yval;

void setup()             
{                                   
     pinMode(speedPin,OUTPUT);
     pinMode(dir1,OUTPUT);
     pinMode(dir2,OUTPUT);
     pinMode(yPin,INPUT);
    
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
     yval= analogRead(yPin);

    if(yval>=510 && yval<=540)
    {
         mSpeed=0;
         analogWrite(speedPin,mSpeed);          
         
    }


    if(yval<510)
    {
           digitalWrite(dir1,HIGH);  
           digitalWrite(dir2,LOW);

           mSpeed= 125 - ( (130./510.)*(yval-510.)  );

           analogWrite(speedPin,mSpeed);
    }


    if(yval>540)
    {
           digitalWrite(dir1,LOW);  
           digitalWrite(dir2,HIGH);

           mSpeed= 125 + ( (130./483.)*(yval-540.)  );

           analogWrite(speedPin,mSpeed);
    }


}
