#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{ clrscr();

 const int a=5;
 int b[a] ;

  cout<<"Please enter the values : ";

 for(int i=0
  ; i<a ; i++)
 cin>>b[i];

   cout<<endl;

 for(int j=a-1 ; j>=0 ;j-- )
   cout<<b[j]<<endl;

getch();
}