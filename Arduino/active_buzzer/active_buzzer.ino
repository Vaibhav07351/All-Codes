//active buzzer

int actbuzzer=10;
int uservalue;
void setup()             
{                                   
     pinMode(actbuzzer,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

  Serial.println("Enter the value : ");
  while(Serial.available()==0){}
  uservalue = Serial.parseInt();
 
  if (uservalue>10)
  {
    digitalWrite(actbuzzer,HIGH);
    delay(1000);
    digitalWrite(actbuzzer,LOW);
  }

  Serial.println(uservalue);
   
}
