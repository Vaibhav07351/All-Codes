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
  int a[3][3] , r ,c ,b=100,rem ,num=a[r][c];

  for(r=0 ; r<3 ; r++)
  {
       for(c=0 ; c<3 ; c++)
       {
	   cin>>a[r][c];
       }
      cout<<endl;
  }
     cout<<endl;
     cout<<"Diagonal elements are : ";

    for(r=2 ; r>=0 ; r--)
  {
       for(c=2; c>=0 ; c--)
       {
	    if(r==c)
	    {
	      cout<<a[r][c];

	    }

       }

  }


getch();
}