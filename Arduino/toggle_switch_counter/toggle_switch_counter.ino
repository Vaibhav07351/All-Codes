//toggle_switch_counter

int redled=10;
int oldval=1;
int newval=1;
int readingPin=A3;
int readval;
int flag=0;

void setup()             
{                                   
     pinMode(redled,OUTPUT);
     pinMode(readingPin,INPUT);
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
   
  readval= digitalRead(readingPin);
  oldval=readval;

  if(oldval==1 && newval==0) 
   flag=flag+1; 
  
  if(flag%2==1)
  digitalWrite(redled,HIGH);
  else
  digitalWrite(redled,LOW);
  
  newval=oldval;

  Serial.println(readval);   
}
