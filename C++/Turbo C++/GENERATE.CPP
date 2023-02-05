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
  int a[200],i,j,n;
  cout<<"Enter till where u want series : ";
  cin>>n;

  for(i=1,j=0;  j<n  ;j++,i+=2)
  {
    a[j]=i;

    if(j%2==1)
    cout<<a[j]* -1<<" ";
    else
    cout<<a[j]<<" ";

  }

getch();
}