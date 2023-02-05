//reading_string

String msg = "Enter the colour of LED : ";
String ledcolor;
int redled=12;
int yellowled=9;
int greenled=6;

void setup()             
{                                   
   pinMode(redled ,OUTPUT);
   pinMode(yellowled,OUTPUT);
   pinMode(greenled,OUTPUT);
   Serial.begin(9600);    
}                                                  

                                                         
void loop() 
{    

 Serial.println(msg);
 while(Serial.available()==0){}

 ledcolor= Serial.readString();
 
 if(ledcolor=="RED")
 { digitalWrite(redled,HIGH);
   digitalWrite(yellowled,LOW);
   digitalWrite(greenled,LOW);
 }
 
 if(ledcolor=="YELLOW")
 { digitalWrite(redled,LOW);
   digitalWrite(yellowled,HIGH);
   digitalWrite(greenled,LOW);
 }
 
 if(ledcolor=="GREEN")
 { digitalWrite(redled,LOW);
   digitalWrite(yellowled,LOW);
   digitalWrite(greenled,HIGH);
 }

}
