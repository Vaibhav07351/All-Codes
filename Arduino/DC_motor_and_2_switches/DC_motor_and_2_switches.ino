int speedPin=11;                     //DC motor and 2 switches
int dir1=4;
int dir2=3;
int mSpeed=100;
int switch1Pin=7;
int switch2Pin=6;
int switch1val=1;
int switch1valold=1;
int switch2val=1;
int switch2valold=1;
int counter=0;


void setup()             
{                                   
     pinMode(speedPin,OUTPUT);
     pinMode(dir1,OUTPUT);
     pinMode(dir2,OUTPUT);
     pinMode(switch1Pin,INPUT);
     pinMode(switch2Pin,INPUT);

     digitalWrite(switch1Pin,HIGH);
     digitalWrite(switch2Pin,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
     switch1val=digitalRead(switch1Pin);
     switch2val=digitalRead(switch2Pin);

   if(mSpeed>255)
    mSpeed=250;

    if(counter==0)
    {
         mSpeed=0;
         analogWrite(speedPin,mSpeed);          
         
    }
    
    if(counter==1 || counter==-1)
    {
         mSpeed=100;
         analogWrite(speedPin,mSpeed);          
         
    }


    if(switch1valold==1 && switch1val==0)
    {
        if(mSpeed<250)
          counter+=1; 
        if(counter<0 && mSpeed==250)
          counter+=1;
      
                  if(counter>0)
                 {
                        digitalWrite(dir1,HIGH);  
                        digitalWrite(dir2,LOW);
                        
                     if(counter==1 || counter==-1)
                     mSpeed=100;

                     else
                        mSpeed+=25;
                        
                        if(mSpeed>255)
                        mSpeed=250;

                        analogWrite(speedPin,mSpeed);    
                  }

                  if(counter<0)
                 {
                        digitalWrite(dir1,LOW);  
                        digitalWrite(dir2,HIGH);
                     if(counter==1 || counter==-1)
                     mSpeed=100;

                     else
                        mSpeed-=25;

                        analogWrite(speedPin,mSpeed);    
                  }

                  


                  
    }


    if(switch2valold==1 && switch2val==0)
    {
       if(mSpeed<250)
          counter-=1;
      if(counter>0 && mSpeed==250)
          counter-=1;
         
          
                  if(counter<0)
                 {
                        digitalWrite(dir1,LOW);  
                        digitalWrite(dir2,HIGH);
                          
                       if(counter==1 || counter==-1)
                       mSpeed=100;
 
                        else
                        mSpeed+=25;
                        
                        if(mSpeed>255)
                        mSpeed=250;
                        
                        analogWrite(speedPin,mSpeed);    
                  }
           

                  if(counter>0)
                 {
                        digitalWrite(dir1,HIGH);  
                        digitalWrite(dir2,LOW);
                        
                       if(counter==1 || counter==-1)
                       mSpeed=100;

                        else
                        mSpeed-=25;
                        
                        analogWrite(speedPin,mSpeed);    
                  }


         
    }


   switch1valold=switch1val;
   switch2valold=switch2val;



Serial.print("counter = ");
Serial.print(counter);
Serial.print("       mspeed = ");
Serial.print(mSpeed);
Serial.print("      Switch1val= ");
Serial.print(switch1val);
Serial.print("      Switch2val= ");
Serial.println(switch2val);

   
}
