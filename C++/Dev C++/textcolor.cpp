#include<iostream>              //for cin cout
#include<stdlib.h>              //for  clear screen -> system("CLS")
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<math.h>
#include<ctype.h>
#include<typeinfo>
#include<limits.h>

  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);           // to declare variable h for colour changing 
  
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
//these are for system("Color F0")                 //in this text attribute it goes till 255 different values of foreground and background combination

using namespace std;

int main()
{       system("Color F0");
   
   for(int i=0; i<256;i++)
   {
   SetConsoleTextAttribute(h,i);     
   cout<<i<<" hello "<<endl; 
   
   
   }                                                //use h,252 etc for white background and text colour
                                                    // h,240 do later for normal black twxt color
   return 0;

}

