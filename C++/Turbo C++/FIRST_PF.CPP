#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
  clrscr();
  int num,a,flag=0;

  cout<<" Enter a number:  ";
  cin>>num;

  for(a=2;a<=num/2;a++)

    {
       if(num%a==0)
       {
       cout<<endl<<"Its 1st prime factor is : "<<a;
       flag=1;
       break;
       }


    }
    if(flag==0)
    cout<<"The number entered is a Prime no.";

getch();
}