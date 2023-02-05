//rgb_led

String msg = "Enter the colour of LED : ";
String ledcolor;
int blueled=7;
int greenled=9;
int redled=12;

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

}
