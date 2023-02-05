//LCD_calculator

#include<LiquidCrystal.h>   //Calculator

int rs= 7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int i=0;
float firstno;
float secondno;
char character;
float result;
int waste;
char string[20]={"C'est Calculator"};

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

      delay(500);
      lcd.clear();
      i++;

      lcd.setCursor(0,1);
      
      lcd.print("Enter first no :");
      while(Serial.available()==0)
        {
          if(i==17)
  i=0;
   
      lcd.setCursor(i,0);
      lcd.print(string);

      delay(200);
      lcd.clear();
      i++;
      lcd.setCursor(0,1);
      
      lcd.print("Enter first no :");

      
        }

      firstno=Serial.parseFloat();
      
      lcd.clear();
      lcd.setCursor(0,0);
      
      lcd.print("Enter second no:");
      while(Serial.available()==0){}

      secondno=Serial.parseFloat();
      

      lcd.clear();
      lcd.setCursor(0,0);
      
      lcd.print("Enter Operation");
      while(Serial.available()==0){}

      character=Serial.read();
      
      if(character=='+')
      result= firstno+secondno;

      if(character=='-')
      result= firstno-secondno;

      if(character=='*')
      result= firstno*secondno;
      
      if(character=='/')
      result= firstno/secondno;

          lcd.clear();
      lcd.setCursor(0,0);

      
      lcd.print(firstno);
      lcd.print(" ");
      lcd.print(character);
      lcd.print(" ");
      lcd.print(secondno);
      lcd.print(" = ");
      lcd.setCursor(0,1);
      lcd.print("  ");
      lcd.print(result);

      while(Serial.available()==0);
      waste=Serial.parseInt();
      lcd.clear();
      
      delay(3000); 


           
}
