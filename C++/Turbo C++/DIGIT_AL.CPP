#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
void main()
{ clrscr();
  char a;
  cout<<"Enter a character : ";
  cin>>a;

  if(a>=48 && a<=57)
  cout<<endl<<"The entered character is a digit...";
  else if(a>=65&& a<=90)
  cout<<endl<<"The entered character is an alphabet in upper case...";
  else if(a>=97&& a<=122)
  cout<<endl<<"The entered character is an alphabet in lower case...";
  else
  cout<<endl<<"The enter character is any other character... ";


getch();
}