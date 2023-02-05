//LCD_moving_text

#include<LiquidCrystal.h>   //moving text

int rs= 7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int i=0;
char string[20]={"Moving Text"};

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup()             
{                                   
     lcd.begin(16,2);   
     Serial.begin(9600);
}                                                   


                                                         
void loop() 
{    
  if(i==17)
  i=0;
   
      lcd.setCursor(i,0);


      lcd.print(string);

delay(1000);
      lcd.clear();
i++;




}
