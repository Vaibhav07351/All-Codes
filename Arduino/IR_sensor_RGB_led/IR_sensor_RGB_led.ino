//IR_sensor_RGB_led


#include<IRremote.h>                         //IR Sensor and RGB led

int IRpin= 6;                   


String remotefun="clear";

int Onsignal=0;


int blueled=9;
int greenled=10;
int redled=5;

int redval=0;
int blueval=0;
int greenval=0;

int copyredval=0;
int copyblueval=0;
int copygreenval=0;

int i=0;
int j=0;
int k=0;
int c=0;

IRrecv IR(IRpin);               //giving the object a name i.e IR->(name given) to use in the entire program now
decode_results cmd;             //not arduino command , it comes from the installed library


  

void setup()             
{                                   
     IR.enableIRIn();           //starting the module
     pinMode(redled ,OUTPUT);
     pinMode(blueled,OUTPUT);
     pinMode(greenled,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{   
    i=0;
 
   
     while(IR.decode(&cmd)==0)
     { 
            if(remotefun=="Flash")
            {
              
    digitalWrite(redled,HIGH);    //red
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,LOW);

   delay(90);

   digitalWrite(redled,LOW);      //blue
   digitalWrite(blueled,HIGH);
   digitalWrite(greenled,LOW);

   delay(90);

   digitalWrite(redled,LOW);    //green
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,HIGH);

   delay(90);

    analogWrite(redled,255);    //yellow
   analogWrite(greenled,200);  
   analogWrite(blueled,0);


   delay(90);

    analogWrite(redled,0);        //cyan
   analogWrite(greenled,255);  
   analogWrite(blueled,255);

  
   delay(90);

  analogWrite(redled,255);       //magenta
   analogWrite(greenled,0);  
   analogWrite(blueled,150);
 
  delay(90);

     analogWrite(redled,255);
   analogWrite(greenled,140);  
   analogWrite(blueled,0);


   delay(90);
  
            }


        if(remotefun=="Strobe")
         {
                        for(i=0;i<255;i=i+1){
       analogWrite(redled,i);    //red
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(2);
      }
      for(i=0;i<255;i=i+1){
       analogWrite(redled,0);    //green
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(2);
      }
      for(i=0;i<255;i=i+1){
       analogWrite(redled,0);    //blue
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(2);
      }


    redval=255;                 //yellow  
    greenval=200;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=8; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //yellow ends

    

  delay(40);


 
    redval=0;                 //cyan  
    greenval=255;
    blueval=255;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //cyan ends

    

   delay(40);


 
    redval=255;                 //Magenta  
    greenval=0;
    blueval=150;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //Magenta ends

    
  delay(40);



 
    redval=255;                 //Orange  
    greenval=140;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //Orange ends


   delay(40);

          
          
          
         }







            
        if(remotefun=="Fade")
        {
                for(i=0;i<255;i=i+2){
       analogWrite(redled,i);    //red
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(3);
      }
      
      for(i=255;i>=0;i=i-2){
       analogWrite(redled,i);    //red dec
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(3);
      }

      
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //green
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(3);
      }

      for(i=255;i>=0;i=i-2){
       analogWrite(redled,0);    //green  dec
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(3);
      }
      
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //blue
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(3);
      }
      
      for(i=255;i>=0;i=i-2){
       analogWrite(redled,0);    //blue  dec
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(3);
      }




    redval=255;                 //yellow  
    greenval=200;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=8; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //yellow inc

    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

        analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
   
   
     }                                                        //yellow dec ends





  delay(40);


 
    redval=0;                 //cyan  
    greenval=255;
    blueval=255;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //cyan inc



    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

              analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   

     }                                                         //cyan dec ends




    

   delay(40);


 
    redval=255;                 //Magenta  
    greenval=0;
    blueval=150;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //Magenta inc


    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
   
     }                                                    //Magenta dec ends

    

    
  delay(40);



 
    redval=255;                 //Orange  
    greenval=140;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //Orange inc


   delay(40);
     

    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   

   
     }                                                //orange dec ends



 
          
        }






      if(remotefun=="Smooth")
      {


      i=255;         //red
      j=0;           //blue  
      k=0;           //green
  
      for(i,j,k; j<=255;j++)
      {
          if(j==255 && k==0)
          {
                  for(k=0;k<255;k+=3)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(3);
                      
   
                   }
          }        


         if(i==255 && j==255 && k==255)
         {
                  for(j=255;j>0;j--)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
                         
                   }  
         }
          
         if(i==255 && j==0 && k==255)
         {
                  for(i=255,j=0  ;  j<255,i>0 ;   j++,i-=3)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
                         
                   }  
         }





        if(i==0 && j==255 && k==255)
        {
          
             for(j;j>0;j--)
             {
              
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
              
             }  
          
          
          
          
          
          
        }

          
        
           analogWrite(redled,i);    
           analogWrite(greenled,k);  
           analogWrite(blueled,j);
           delay(4);   




     if(i==0&&j==0&&k==255)
     break;


                
      }
  
  
  

      
        
      } 



            
     }

     Serial.print("Received Signal = ");
     Serial.println(cmd.value,HEX);                         //important to know if any incorrect value or wrong input random reading
     delay(500); 

     IR.resume();
     
     remotefun="clear";
     
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
    Onsignal=1;
    redval=255;
    blueval=255;
    greenval=255;        
 } 


 if(remotefun=="OFF"||remotefun=="off")
 { 
   Onsignal=0;
   
   redval=0;
   blueval=0;
   greenval=0;
 }

    
 if(Onsignal==1 && remotefun=="RED"  ||  remotefun=="red"  ||  remotefun=="Red"  )
 { redval=255;
   blueval=0;
   greenval=0;
 }
 
 if(Onsignal==1 && (remotefun=="BLUE" || remotefun=="blue"  ||  remotefun=="Blue") )
 { redval=0;
   blueval=255;
   greenval=0;
 }
 
 if(Onsignal==1 && (remotefun=="GREEN" || remotefun=="green" || remotefun=="Green") )
 { redval=0;
   blueval=0;
   greenval=255;
 }

 if(Onsignal==1 && (remotefun=="WHITE"  ||  remotefun=="white"  ||  remotefun=="White") )
 { redval=255;
   greenval=255;  
   blueval=255;
 }
 
 
 if(Onsignal==1 && (remotefun=="YELLOW"  ||  remotefun=="yellow"  ||  remotefun=="Yellow"   ||  remotefun=="Four"              ) )
 { redval=255;
   greenval=200;  
   blueval=0;
 }

 
 if(Onsignal==1 && (remotefun=="CYAN"  ||  remotefun=="cyan"  ||  remotefun=="Cyan") )
 { redval=0;
   greenval=255;  
   blueval=255;
 }
 
 if(Onsignal==1 && (remotefun=="MAGENTA"  ||  remotefun=="magenta"  ||  remotefun=="Magenta") )
 { redval=255;
   greenval=0;  
   blueval=150;
 }
 
 if(Onsignal==1 && (remotefun=="ORANGE"  ||  remotefun=="orange"  ||  remotefun=="Orange") )               
 { 
   redval=255;
   greenval=140;  
   blueval=0;
 }


  if(remotefun!="IncBrightness" && remotefun!="DecBrightness" && remotefun!="clear")
  {
  copyredval=redval;
  copygreenval=greenval;
  copyblueval=blueval;
  }


 
 if(Onsignal==1 && (remotefun=="DecBrightness"  ||  remotefun=="decBrightness"  ||  remotefun=="DECbrightness") )               
 { 

   if(redval>=0 && greenval>=0 && blueval>=0 )
   {
   redval=   0.50 * redval;
   greenval= 0.50 * greenval;  
   blueval=  0.50 *  blueval;
   }
           if(redval<0)
           {
           redval=0;
           }   
           
           if(greenval<0)
           {
            greenval=0;
           }
           
           if(blueval<0)
           {
            blueval=0;
           }           
  }


 if(Onsignal==1 &&  (remotefun=="IncBrightness"  ||  remotefun=="incBrightness"  ||  remotefun=="INCbrightness") )               
 { 
  
       if(redval>0 && (redval*2) < 255 &&  (redval*2)<=copyredval    )
       {
         redval= 2* redval;
       }
   
        if(greenval>0 && (greenval*2) < 255 &&  (greenval*2)<=copygreenval    )
       {
          greenval= 2*greenval;    
       }

  
        if(blueval>0 && (blueval*2) < 255 &&  (blueval*2)<=copyblueval    )
       {
          blueval=2*blueval;
       }
   

           if(redval>255)
           redval=255;
   
           if(greenval>255)
           greenval=255;
   
           if(blueval>255)
           blueval=255;
  }




 if(Onsignal==1 && (remotefun=="Flash"  ||  remotefun=="FLASH"  ) )               
 { 

    redval=255;
    blueval=255;
    greenval=255;    

    digitalWrite(redled,HIGH);    //red
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,LOW);

   delay(90);

   digitalWrite(redled,LOW);      //blue
   digitalWrite(blueled,HIGH);
   digitalWrite(greenled,LOW);

   delay(90);

   digitalWrite(redled,LOW);    //green
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,HIGH);

   delay(90);

    analogWrite(redled,255);    //yellow
   analogWrite(greenled,200);  
   analogWrite(blueled,0);


   delay(90);

    analogWrite(redled,0);        //cyan
   analogWrite(greenled,255);  
   analogWrite(blueled,255);

  
   delay(90);

  analogWrite(redled,255);       //magenta
   analogWrite(greenled,0);  
   analogWrite(blueled,150);
 
  delay(90);

     analogWrite(redled,255);   //orange
   analogWrite(greenled,140);  
   analogWrite(blueled,0);


   delay(90);
  
 }


 if(Onsignal==1 && (remotefun=="Strobe"  ||  remotefun=="strobe"  ) )  
 {
      for(i=0;i<255;i=i+2){
       analogWrite(redled,i);    //red
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(4);
      }
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //green
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(4);
      }
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //blue
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(4);
      }


    redval=255;                 //yellow  
    greenval=200;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=8; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //yellow ends

    

  delay(40);


 
    redval=0;                 //cyan  
    greenval=255;
    blueval=255;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //cyan ends

    

   delay(40);


 
    redval=255;                 //Magenta  
    greenval=0;
    blueval=150;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //Magenta ends

    
  delay(40);



 
    redval=255;                 //Orange  
    greenval=140;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(50);   
    }                                                      //Orange ends


   delay(40);
   
 }                                          //Strobe ends








 if(Onsignal==1 && (remotefun=="Fade"  ||  remotefun=="fade"  ) )
 {
  
      for(i=0;i<255;i=i+2){
       analogWrite(redled,i);    //red
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(3);
      }
      
      for(i=255;i>=0;i=i-2){
       analogWrite(redled,i);    //red dec
       analogWrite(greenled,0);  
       analogWrite(blueled,0);
       delay(3);
      }

      
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //green
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(3);
      }

      for(i=255;i>=0;i=i-2){
       analogWrite(redled,0);    //green  dec
       analogWrite(greenled,i);  
       analogWrite(blueled,0);
       delay(3);
      }
      
      for(i=0;i<255;i=i+2){
       analogWrite(redled,0);    //blue
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(3);
      }
      
      for(i=255;i>=0;i=i-2){
       analogWrite(redled,0);    //blue  dec
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(3);
      }




    redval=255;                 //yellow  
    greenval=200;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=8; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //yellow inc

    for( c=0;c<9;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

        analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
   
   
     }                                                        //yellow dec ends





  delay(40);


 
    redval=0;                 //cyan  
    greenval=255;
    blueval=255;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //cyan inc



    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

              analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   

     }                                                         //cyan dec ends




    

   delay(40);


 
    redval=255;                 //Magenta  
    greenval=0;
    blueval=150;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //Magenta inc


    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
   
     }                                                    //Magenta dec ends

    

    
  delay(40);



 
    redval=255;                 //Orange  
    greenval=140;
    blueval=0;

    i=redval;
    j=greenval;
    k=blueval;
     
    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }
     }

    
    for(c=9; c>=0;c-- )
    {
      

                         if(i>0 && (i*1.25) < 255 &&  (i*1.25)<=copyredval    )
                         i= 1.25* i;
   
                         if(j>0 && (j*1.25) < 255 &&  (j*1.25)<=copygreenval    )
                         j= 1.25*j;    
      
                         if(k>0 && (k*2) < 255 &&  (k*1.25)<=copyblueval    )
                         k=1.25*k;
       
   
 
           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   
    }                                                      //Orange inc


   delay(40);
     

    for( c=0;c<10;c++  )
     {
      
   if(i>=0 && j>=0 && k>=0 )
   {
   i=   0.80 * i;
   j= 0.80 * j;  
   k=  0.80 *  k;
   }

           analogWrite(redled,i);    
           analogWrite(greenled,j);  
           analogWrite(blueled,k);
           delay(36);   

   
     }                                                //orange dec ends


      
  
 }





if(Onsignal==1 && (remotefun=="Smooth"  ||  remotefun=="smooth"  ) )
{
      i=255;         //red
      j=0;           //blue  
      k=0;           //green
  
      for(i,j,k; j<=255;j++)
      {
          if(j==255 && k==0)
          {
                  for(k=0;k<255;k+=3)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(2);
                      
   
                   }
          }        


         if(i==255 && j==255 && k==255)
         {
                  for(j=255;j>0;j--)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
                         
                   }  
         }
          
         if(i==255 && j==0 && k==255)
         {
                  for(i=255,j=0  ;  j<255,i>0 ;   j++,i-=3)  
                   {
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
                         
                   }  
         }





        if(i==0 && j==255 && k==255)
        {
          
             for(j;j>0;j--)
             {
              
                      analogWrite(redled,i);    
                      analogWrite(greenled,k);  
                      analogWrite(blueled,j);
                      delay(4);
                      
              
             }  
          
          
          
          
          
          
        }

          
        
           analogWrite(redled,i);    
           analogWrite(greenled,k);  
           analogWrite(blueled,j);
           delay(4);   




     if(i==0&&j==0&&k==255)
     {
        break;
      }


                
      }
  
  
  
  
  
  
  
 }






 analogWrite(redled,redval);
 analogWrite(greenled,greenval);
 analogWrite(blueled,blueval);
     
     
 Serial.println(remotefun);
 
 Serial.print("redval= ");  
 Serial.print(redval);
 Serial.print("  greenval= "); 
 Serial.print(greenval);
 Serial.print("  blueval= ");
 Serial.println(blueval);
 Serial.println(" ");

    
}
