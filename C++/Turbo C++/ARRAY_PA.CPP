#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
  clrscr();
  char a[40],p[20];

  cout<<"Enter the string : ";
  gets(a);
  strcpy(p,strrev(a)) ;

  strrev(a);

  if(strcmpi(p,a) ==0)
  cout<<endl<<"It is a pallindrome";
  else
  cout<<endl<<"It is NOT a pallindrome";


getch();
}