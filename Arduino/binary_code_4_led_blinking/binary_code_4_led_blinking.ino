//binary_code_4_led_blinking

int led1=   2;
int led2=   3; 
int led3 =  4; 
int led4 =  5;
int binnum[4]={0,0,0,0};
int i=0;
int number=0;
int numcopy=0;

void setup()             
{                                   
     pinMode(led1,OUTPUT);
     pinMode(led2,OUTPUT);
     pinMode(led3,OUTPUT);
     pinMode(led4,OUTPUT);

     digitalWrite(led1 ,LOW);
     digitalWrite(led2 ,LOW);
     digitalWrite(led3 ,LOW);
     digitalWrite(led4 ,LOW);
}                                                   


                                                         
void loop() 
{    
     int led1=   2;
     int led2=   3; 
     int led3 =  4; 
     int led4 =  5;
     int binnum[4]={0,0,0,0};
     int i=0;
     int number=0;
     int numcopy=0;

                     
   for(number=0;number<16;number++)
   {


                      
              led1=2;
                         
        for( numcopy=number,i=0    ; numcopy>0    ;i++) 
         {   binnum[i]= numcopy%2;
              numcopy=numcopy/2;          
         } 


        for(int j=3;j>=0;j--)
        {
             if(binnum[j]==0)
             { digitalWrite(led1,LOW);
                              
             }
             
             if(binnum[j]==1)
             {digitalWrite(led1,HIGH);
                           
             }


             led1++;  
        }
             
         led1=2;  
       delay(500);    
   }

  
   digitalWrite(led1 ,LOW);
   digitalWrite(led2 ,LOW);
   digitalWrite(led3 ,LOW);
   digitalWrite(led4 ,LOW);

    delay(2000);
}
