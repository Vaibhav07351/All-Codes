//analogWrite_dim_to_bright

int led1=   10;
int led2=   9; 
int led3 =  6; 
int led4 =  5;
int led5 =  3;
int brightlev=0;

void setup()             
{                                   
     pinMode(led1,OUTPUT);
     pinMode(led2,OUTPUT);
     pinMode(led3,OUTPUT);
     pinMode(led4,OUTPUT);
     pinMode(led5,OUTPUT);

     digitalWrite(led1 ,LOW);
     digitalWrite(led2 ,LOW);
     digitalWrite(led3 ,LOW);
     digitalWrite(led4 ,LOW);
     digitalWrite(led5 ,LOW);

}                                                   


                                                         
void loop() 
{    
     int led1=   10;
     int led2=   9; 
     int led3 =  6; 
     int led4 =  5;
     int led5 =  3;
     int brightlev = 0;                 
        
     for(brightlev=0; brightlev<125; brightlev++)
     {
       analogWrite(led1 , brightlev);
       delay(8);  
       analogWrite(led2 , brightlev);
       delay(8);  
       analogWrite(led3 , brightlev);
       delay(8);  
       analogWrite(led4 , brightlev);
       delay(8);  
       analogWrite(led5 , brightlev);
       delay(8);  
     }
      

        delay(1000);     
}
