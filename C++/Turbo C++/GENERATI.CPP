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
  long int a[50][50],i,j,n;

  cout<<"Enter till where u want series : ";
  cin>>n;

  for(i=1 ; i<=n ; i++)
  {
       for(j=1 ; j<=i ;j++)
       {
	    cout<<"3";
       }
     cout<<" ";
  }

getch();
}