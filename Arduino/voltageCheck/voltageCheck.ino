//voltageCheck

int ReadingPin =A3;
int redled=3; 
int yellowled=5;
int greenled=8;
float voltage=0.0;

void setup()
{
   pinMode(ReadingPin , INPUT);
   pinMode(redled, OUTPUT );
   pinMode(yellowled, OUTPUT );
   pinMode(greenled, OUTPUT );
   Serial.begin(9600);

} 

void loop()
{ 

  voltage = (5.00/1023.000) * analogRead(ReadingPin);

  if(voltage>=4.0)
  {
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW );
    digitalWrite(yellowled, LOW );
   // delay(500);
  }

  if(voltage>2.00 && voltage<4.0)
  {
      digitalWrite(greenled, LOW );
      digitalWrite(redled, LOW );
      digitalWrite(yellowled, HIGH );
     // delay(500);
  }
  if(voltage<=2.0)
  {
      digitalWrite(greenled, HIGH );
      digitalWrite(yellowled, LOW );
      digitalWrite(redled, LOW );
     
  }
  
  Serial.println(voltage);
 // delay(500);

  
}
