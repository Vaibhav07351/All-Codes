//IR_sensor_dcmotor

#include<IRremote.h>                //IR remote and DC Motor
#include<LiquidCrystal.h>

int IRpin= 6;                  

int rs= 7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

int speedPin=5;                     //DC motor and 2 switches
int dir1=4;
int dir2=3;
int mSpeed=0;
int Onsignal=0;
int dirSign=1;                    //1 for forward   -1 for backward

String remotefun="clear";

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

IRrecv IR(IRpin);               //giving the object a name i.e IR->(name given) to use in the entire program now
decode_results cmd;             //not arduino command , it comes from the installed library


  

void setup()             
{ 
     lcd.begin(16,2);                                  
     IR.enableIRIn();           //starting the module

     pinMode(speedPin,OUTPUT);
     pinMode(dir1,OUTPUT);
     pinMode(dir2,OUTPUT);
     
     Serial.begin(9600);
}                                                   




void dirSet()
{
  
     if(dirSign==1)
     {
      digitalWrite(dir1,HIGH);  
      digitalWrite(dir2,LOW);           
     }


     if(dirSign==-1)
     {
      digitalWrite(dir1,LOW);  
      digitalWrite(dir2,HIGH);           
     }

}



                                                         
void loop() 
{   
  
    if(mSpeed>255)
    mSpeed=250;

     
     lcd.setCursor(0,0);
     
  /*   lcd.print("CHILL");
     
     lcd.print(" Spd= ");
     lcd.print(mSpeed);

     lcd.setCursor(0,1);
     lcd.print("No CMD yet");
  */ 
     while(IR.decode(&cmd)==0)
     {}

     Serial.print("Received Signal = ");
     Serial.println(cmd.value,HEX);                         //important to know if any incorrect value or wrong input random reading
     delay(500); 

     IR.resume();
     
     remotefun="clear";       //for if wrong value recieved so nothing happens and clear gets printed (not previous cmd )
     
     if(cmd.value==0x1FEE01F)
     remotefun="Zero";
     if(cmd.value==0x1FE50AF||cmd.value==0xF710EF)
     remotefun="One";
     if(cmd.value==0x1FED827||cmd.value==0xF7906F)
     remotefun="Two";
     if(cmd.value==0x1FEF807||cmd.value==0xF750AF)
     remotefun="Three";
     if(cmd.value==0x1FE30CF||cmd.value==0xF730CF)
     remotefun="Four";
     if(cmd.value==0x1FEB04F||cmd.value==0xF7B04F)
     remotefun="Five";            
     if(cmd.value==0x1FE708F||cmd.value==0xF7708F)
     remotefun="Six";
     if(cmd.value==0x1FE00FF||cmd.value==0xF708F7)
     remotefun="Seven";
     if(cmd.value==0x1FEF00F||cmd.value==0xF78877)
     remotefun="Eight";
     if(cmd.value==0x1FE9867||cmd.value==0xF748B7)
     remotefun="Nine";
     if(cmd.value==0x1FE48B7)
     remotefun="Power";
     if(cmd.value==0xF7C03F)
     remotefun="ON";
     if(cmd.value==0xF740BF)
     remotefun="OFF";     
     if(cmd.value==0x1FEA05F||cmd.value==0xF728D7)
     remotefun="decVol";
     if(cmd.value==0x1FE609F||cmd.value==0xF76897)
     remotefun="incVol";
     if(cmd.value==0x1FE40BF)
     remotefun="Rewind";
     if(cmd.value==0x1FEC03F)
     remotefun="FastFwd";
     if(cmd.value==0x1FE807F||cmd.value==0xF7A857)
     remotefun="PausePlay";
     if(cmd.value==0x1FE58A7)
     remotefun="Mode";            
     if(cmd.value==0x1FE7887)
     remotefun="Mute";
     if(cmd.value==0x1FE20DF)
     remotefun="EQ";
     if(cmd.value==0x1FE906F)
     remotefun="USD";
     if(cmd.value==0x1FE10EF)
     remotefun="RPT";
     if(cmd.value==0xF720DF)
     remotefun="RED";
     if(cmd.value==0xF7A05F)
     remotefun="Green";
     if(cmd.value==0xF7609F)
     remotefun="Blue";
     if(cmd.value==0xF7E01F)
     remotefun="White";
     if(cmd.value==0xF700FF)
     remotefun="IncBrightness";
     if(cmd.value==0xF7807F)
     remotefun="DecBrightness";
     if(cmd.value==0xF7D02F)
     remotefun="Flash";
     if(cmd.value==0xF7F00F)
     remotefun="Strobe";
     if(cmd.value==0xF7C837)
     remotefun="Fade";
     if(cmd.value==0xF7E817)
     remotefun="Smooth";
     
    

     if(remotefun=="Power" || remotefun=="POWER"  ||  remotefun=="On"  ||  remotefun=="ON")
     {   
         dirSign=1;
         Onsignal=1;
         
         dirSet();
                    
         mSpeed=100;
         analogWrite(speedPin,mSpeed); 

         
     } 


     if(remotefun=="Off"  ||  remotefun=="OFF")
     {   
         Onsignal=0;
         
         dirSet();  
         mSpeed=0;
         analogWrite(speedPin,mSpeed); 
         
         
     } 



     if(Onsignal==1 && dirSign==1 && remotefun=="incVol"  ||  remotefun=="IncVol"  ||  remotefun=="INCVOL")
     {    
         dirSet();
            
         if(mSpeed==0)
         mSpeed=125;
         else               
         mSpeed+=25;

         if(mSpeed>255)
         mSpeed=250;

         analogWrite(speedPin,mSpeed); 
      
     } 



     if(Onsignal==1  && dirSign==-1 && remotefun=="decVol"  ||  remotefun=="DecVol"  ||  remotefun=="DECVOL")
     {               
         if(mSpeed==0)
         mSpeed=100;

         else
         mSpeed+=25;

         if(mSpeed>255)
         mSpeed=250;
         
         dirSet();
          
         analogWrite(speedPin,mSpeed); 

             
     } 




     if(Onsignal==1 && dirSign==-1 && remotefun=="incVol"  ||  remotefun=="IncVol"  ||  remotefun=="INCVOL")
     {
           mSpeed-=25;

           if(mSpeed==75)
           {
               dirSign=1; 
               mSpeed=0; 
              
           } 


      
         dirSet();
                                       

         analogWrite(speedPin,mSpeed);

         
          
     }




     if(Onsignal==1  && dirSign==1 && remotefun=="decVol"  ||  remotefun=="DecVol"  ||  remotefun=="DECVOL")
     {               
          
           mSpeed-=25;
       

           if(mSpeed==75)
           {
               dirSign=-1; 
               mSpeed=0; 
              
           } 

           dirSet(); 
           
           analogWrite(speedPin,mSpeed); 
     } 





     
     lcd.clear();
     
     Serial.println(remotefun);
     lcd.setCursor(0,0);

     if(dirSign==1 && Onsignal==1)
     {
      lcd.print("Forwrd");
      Serial.println("Forwrd");        
     }
     
     if(dirSign==-1 && Onsignal==1)
     {lcd.print("Revrse");
      Serial.println("Revrse");  
     }

     if(Onsignal==0 )
     lcd.print("CHILL");
     
     lcd.print(" Spd= ");
     lcd.print(mSpeed);

     lcd.setCursor(0,1);
     
     lcd.print(remotefun);

    
     Serial.print("mSpeed=  ");
     Serial.println(mSpeed);
     Serial.println("");

       
}
