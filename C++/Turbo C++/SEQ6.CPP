#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   int out,in,other=1,count=1,val=0;
   char sp=' ',ch='&';

   for(out=1;out<=6,other<=12;other+=2,out+=1)
   {    cout<<"         ";
	val=0;

	for(count=6;count>=out;count-=1 )
	cout<<sp<<sp;

       for(in=1;in<=other;in+=1)
       {


	  cout<<ch<<sp;

       }


     cout<<endl;

   }


getch();
}