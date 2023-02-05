#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
void main()
{
  clrscr();
  int c,d;
  char a[50],b[50];

  cout<<"Enter the 1st string : ";
  gets(a);

  for(c=0;a[c]!='\0';c++)
  {}



  cout<<"Enter the 2nd string : ";
  gets(b);

   for(d=0;a[d]!='\0';d++)
  {}



  for(int i=c,j=0; j<d ;j++, i++)
  {
       a[i]=b[j];
  }


  cout<<endl;


  for(i=0;i<c+d; i++)
  cout<<a[i];


getch();
}