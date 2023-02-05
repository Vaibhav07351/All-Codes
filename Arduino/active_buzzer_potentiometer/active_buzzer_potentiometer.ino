//active_buzzer_potentiometer


int actbuzzer=10;
int readingPin=A3;
int voltreading;

void setup()             
{                                   
     pinMode(actbuzzer,OUTPUT);
     pinMode(readingPin,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

  voltreading = analogRead(readingPin);
  Serial.println(voltreading);
  delay(20);

  if(voltreading>1000)
  {
    digitalWrite(actbuzzer,HIGH);
  }
  
  else
  digitalWrite(actbuzzer,LOW);
   
}
