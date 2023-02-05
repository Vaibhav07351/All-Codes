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
#include <cwchar>
#include<iomanip>

using namespace std;


void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 
 
int wherex()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.X;
}

int wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.Y;
}

int main()
{    	
	
    int first=1;
    int initialposx;
    int initialposy;
    
  	initialposx=wherex();
	initialposy=wherey();
	
    cout<<"1:       ";
    cin>>first;
    
      while(!cin>>first || !cin.good() ) 
    {   
		   	cin.clear();
        cin.ignore(INT_MAX ,'\n');    
		gotoxy(initialposx +20, initialposy );
		cout<<"  Error";
		gotoxy(initialposx  , initialposy  );	 
       cout<<"1:                                         ";
       gotoxy(wherex()-34,wherey());
	    cin>>first;
    }

    
	       
	cout<<first;	
		
return 0;	

}
