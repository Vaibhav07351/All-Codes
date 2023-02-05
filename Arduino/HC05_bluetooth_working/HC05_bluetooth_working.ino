void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Define Baud rate 9600
  pinMode(13, OUTPUT); // Define pin 13 as OUTPUT
  pinMode(8, OUTPUT); // Define pin 8 as OUTPUT
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'Z': digitalWrite(13, HIGH);break; // when Z is pressed on the app Turn on Pin 13
        case 'z': digitalWrite(13, LOW);break; // when z is pressed on the app Turn off Pin 13
        case 'Y': digitalWrite(8, HIGH);break; // when Y is pressed on the app Turn on Pin 8
        case 'y': digitalWrite(8, LOW);break; // when y is pressed on the Turn off Pin 8
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
