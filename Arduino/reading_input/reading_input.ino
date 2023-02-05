//reading_input

int number=0;
int redLed=12;
String msg= "Blink Number : ";
int counter=0;
void setup()             
{                                   
   pinMode(redLed, OUTPUT);
   Serial.begin(9600);    

}                                                   


                                                         
void loop() 
{    

 Serial.println(msg);
 while(Serial.available()==0){}
 
 number = Serial.parseInt();
 
 Serial.println(number);
 
 for(counter=0; counter<number;counter++)
 {
    digitalWrite(redLed,HIGH);
    delay(500);
    digitalWrite(redLed,LOW);
    delay(500);
       
 }

 
}
