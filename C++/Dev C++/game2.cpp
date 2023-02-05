#include<iostream>              //for cin cout
#include<stdlib.h>              //for  clear screen -> system("CLS")
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>

using namespace std;
int scoreA=501;
int scoreB=501; 
int first=0;
int second=0;
int third=0;
int total=0;
string a;
int x=60;
int y=3;
int round=1;

void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 
int main()
{
 /*   for(int i=40, j=1;j<50;j++ )
    {
    	gotoxy(i,j);
    	cout<<"|";
	}
   */ 
    
    
   for(scoreA,scoreB; scoreA>0 || scoreB>0 ;)  
  {
 
              if(y==3)
           	{
	 
				cout<<"                                         Total    score A   " ;
				cout<<"                                       Total    Score B ";
      	   	}

        cout<<endl;
       
        for(round=1;round<=13;round++) 
        {
         
		   if(round<=9)
		   cout<<endl<<endl<<"Round "<< round <<"|  i)       ii)       iii)   "; 
		   if(round>9)
		   cout<<endl<<endl<<"Round "<< round <<"| i)       ii)       iii)   "; 
         
        } 
 
 
        gotoxy(x,y);
    
		       
        for(round=1;round<=13;round++) 
        {
        	 
           gotoxy(x,y);
		        
		   if(round<=9)
		   cout<<"Round "<< round <<"|  i)       ii)       iii)   ";
		    
		   if(round>9)
		   
		   cout<<"Round "<< round <<"| i)       ii)       iii)   ";
		   
		   cout<<endl<<endl;  
         y+=2;
        } 
 
 
                                                    //input starts after printed table 
 
        x=14;
        y=3;
  
  
        for(round=1;round<=13;round++)
        {
        	
        	gotoxy(x,y);
        	cin>>first;
        	
        	x+=9;
        	gotoxy(x,y);
        	cin>>second ;
        	
        	x+=12;
        	gotoxy(x,y);
        	cin>>third;
        	
        	total=first+ second + third ; 
        	
        	x+=2;
        	gotoxy(x,y);
        	
        	
        	cout<<"      "<<total;
        	
        	scoreA=scoreA-total;
        	
        	x+=15;
        	gotoxy(x,y);
        	cout<<scoreA;
        	
        	
        	
        	
		}
 
        
 
 
 
 
 
 
 
 cin>>first;
 
 
       
  }














	return 0;
	
}















