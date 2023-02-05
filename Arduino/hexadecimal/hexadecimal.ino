//hexadecimal

byte mybyte=0;


void setup()             
{                                   
    
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
  Serial.print(mybyte,DEC);
  Serial.print("              ");
  Serial.print(mybyte,HEX);
  Serial.print("              ");
  Serial.println(mybyte,BIN);
   
   mybyte=mybyte+1;
   
   delay(500);
   
}
