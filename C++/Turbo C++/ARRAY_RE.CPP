#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
  clrscr();

  int i,a=0;
  char n[20];

  cout<<endl<<"Enter a string : ";
  gets(n);
	    cout<<"                 ";
  for(i=strlen(n)-1; i>=0 ; i-- )
  {
      cout<<n[i];

  }

getch();
}