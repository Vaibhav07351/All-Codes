//passivebuz_potentiometer

int passbuzz= 9;
float voltage;
int readingPin=A3;
int buzztime=60;

void setup()             
{                                   
     pinMode(passbuzz,OUTPUT);
     pinMode(readingPin,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   int buzztime=60;
   
   voltage=  analogRead(readingPin);
 
     digitalWrite(passbuzz, HIGH);
     delayMicroseconds(60.+(9940./1023.)*voltage);
     digitalWrite(passbuzz, LOW);
     delayMicroseconds(60.+(9940./1023.)*voltage);
   

  Serial.println(voltage);

}
