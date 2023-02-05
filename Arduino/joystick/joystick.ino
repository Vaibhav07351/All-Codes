//joystick

int xPin=A0;
int yPin=A2;
int switchPin=2;
int xval;
int yval;
int switchval;

void setup()             
{      
     pinMode(xPin,INPUT);
     pinMode(yPin,INPUT);
     pinMode(switchPin,INPUT);                          

     digitalWrite(switchPin,HIGH);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   
   xval= analogRead(xPin);
   yval= analogRead(yPin);
   switchval=digitalRead(switchPin);  

   Serial.print("xval = ");
   Serial.print( xval );
   Serial.print("           yval = ");
   Serial.print(yval );
   Serial.print("        Switchval = ");
   Serial.println(switchval);
 
   
}
