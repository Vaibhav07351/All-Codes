//RGB_light_colours

String msg = "Enter the colour of LED : ";
String ledcolor;
int blueled=9;  //PWM
int greenled=10;  //PWM
int redled=3;   //PWM   
int counter=1;

void setup()             
{                                   
   pinMode(redled ,OUTPUT);
   pinMode(blueled,OUTPUT);
   pinMode(greenled,OUTPUT);
   Serial.begin(9600);    
}                                                  

                                                         
void loop() 
{    

 Serial.println(msg);
 while(Serial.available()==0){}

 ledcolor= Serial.readString();
 
 if(ledcolor=="RED"||ledcolor=="red")
 { digitalWrite(redled,HIGH);
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,LOW);
 }
 
 if(ledcolor=="BLUE"||ledcolor=="blue")
 { digitalWrite(redled,LOW);
   digitalWrite(blueled,HIGH);
   digitalWrite(greenled,LOW);
 }
 
 if(ledcolor=="GREEN"||ledcolor=="green")
 { digitalWrite(redled,LOW);
   digitalWrite(blueled,LOW);
   digitalWrite(greenled,HIGH);
 }

 if(ledcolor=="WHITE"||ledcolor=="white")
 { analogWrite(redled,255);
   analogWrite(greenled,255);  
   analogWrite(blueled,255);
 }
 
 if(ledcolor=="OFF"||ledcolor=="off")
 { analogWrite(redled,0);
   analogWrite(greenled,0);  
   analogWrite(blueled,0);
 }

 
 if(ledcolor=="YELLOW"||ledcolor=="yellow")
 { analogWrite(redled,255);
   analogWrite(greenled,200);  
   analogWrite(blueled,0);
 }

 
 if(ledcolor=="CYAN"||ledcolor=="cyan")
 { analogWrite(redled,0);
   analogWrite(greenled,255);  
   analogWrite(blueled,255);
 }
 
 if(ledcolor=="MAGENTA"||ledcolor=="magenta")
 { analogWrite(redled,255);
   analogWrite(greenled,0);  
   analogWrite(blueled,150);
 }
 
 if(ledcolor=="ORANGE"||ledcolor=="orange")               
 { 
   analogWrite(redled,255);
   analogWrite(greenled,140);  
   analogWrite(blueled,0);
 }

  if(ledcolor=="try"||ledcolor=="try")               
 { 
         for(int i=0;i<255;i=i+2){
       analogWrite(redled,0);    //blue
       analogWrite(greenled,0);  
       analogWrite(blueled,i);
       delay(4);
      }
 }
 
}
