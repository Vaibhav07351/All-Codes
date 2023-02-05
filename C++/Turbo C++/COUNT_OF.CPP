#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
   clrscr();
   long int sum=0, n,r,count=0;

   cout<<"Enter a no. to reverse its digits: ";
   cin>>n;

   for(n;n>0;n/=10)
   {
       r=n%10;
       count++;
       sum= sum+r;

       cout<<r;

   }
   cout<<endl<<"The number has "<<count<<" digits. ";
   cout<<endl<<"The sum of digits of the no is : "<<sum;

getch();
}