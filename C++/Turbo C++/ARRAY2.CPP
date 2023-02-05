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

  cout<<"Enter a string : ";
  gets(n);

  for(i=0; i<strlen(n) ; i++ )
  {
      if(n[i]==' ')
      a++;
  }

  cout<<"The number of spaces are : "<<a;

getch();
}