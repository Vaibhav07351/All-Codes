//active_buzzer_changing_tone


int actbuzzer=10;
int counter;
void setup()             
{                                   
     pinMode(actbuzzer,OUTPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

  for(counter=0;counter<256;counter++)
  {
    analogWrite(actbuzzer,counter);
  
    delay(50);
  }
}
