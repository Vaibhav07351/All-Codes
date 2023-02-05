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

  for(i=0; i<strlen(n) ; i++ )
  {
	if(n[i]==' ')
	{
	  n[i]='#';
	}
	cout<<n[i];
  }


getch();
}