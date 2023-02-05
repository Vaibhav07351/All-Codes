//temp_humidity_sensor

#include <Adafruit_Sensor.h>                //portable on arduino nano ,   lcd and temp/humidity sensor
#include <DHT.h>
#include <DHT_U.h>

#define Type DHT11

#include<LiquidCrystal.h>   

int rs= 7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int sensePin= 2;
float humidity;
float tempC;
float tempF;
int setTime=500;

DHT HT(sensePin,Type);

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup()             
{                                   
    
     HT.begin();
     lcd.begin(16,2);   
     lcd.setCursor(0,0);
     Serial.begin(9600);

     delay(setTime);
}                                                   


                                                         
void loop() 
{    
   lcd.setCursor(0,0);
   
   humidity=HT.readHumidity(); 

   tempC=HT.readTemperature();

   tempF=HT.readTemperature(true);

   
   Serial.print("Humidity : ");
   Serial.print(humidity); 
   Serial.print("    Temperature C : ");
   Serial.print(tempC);
   Serial.print(" C ");
   Serial.print("    Temperature F : ");
   Serial.print(tempF);
   Serial.println(" F ");

    lcd.print("Humidity : ");
    lcd.print(humidity);
    lcd.setCursor(0,1);  
    lcd.print("Temp (C) : ");
    lcd.print(tempC);

   // lcd.clear();
   
}
