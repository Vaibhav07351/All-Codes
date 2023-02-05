//voltmeter_printing

int ReadingPin = A3; 
float OutVolt=0.0; 
int delaytime = 500;

void setup()             
{                                   
    pinMode(ReadingPin , INPUT); 
    
    Serial.begin(9600);

}                                                   


                                                         
void loop() 
{   

  OutVolt= (5.00/1023.00)* analogRead(ReadingPin);
  Serial.println(OutVolt);
  delay(delaytime);

  
}
