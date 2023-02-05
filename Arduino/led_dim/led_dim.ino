//led_dim

int led1=3;
float ledvolt=0.00;
int readpin=A3;

void setup()             
{                                   
     pinMode(led1,OUTPUT);
     pinMode(readpin,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    

    ledvolt = (255.00/1023.00)* analogRead(readpin)   ;       // now  ledvolt in = 0-255 for o-1023 value of analogRead from spinning of Voltmeter

    analogWrite(led1, ledvolt);
    

    Serial.println((5.00/255.00)*ledvolt);
    delay(500);
}
