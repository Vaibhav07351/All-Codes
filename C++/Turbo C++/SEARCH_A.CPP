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
  int n,b=0,a[20],num,flag=0,pos,copy=1;
  char choice;

  cout<<"Enter the number of terms you want to enter : ";
  cin>>n;

  for(int i=0 ;i<n; i++)
  {
    cout<<"Value "<<i+1<<" : ";
    cin>>a[i];
  }
      do{

   cout<<endl<<"Enter the value you want to search : ";
   cin>>num;

  for(i=0; i<n; i++)
  {
       if(a[i]==num)
      {
	 flag=1;
	 copy=0;
      }

      else
      flag=0;

     if(flag==1)
     cout<<endl<<"The number is at "<<i+1<<" position.";


  }

      if(copy==1)
      cout<<endl<<"Number not found.";

      cout<<endl<<endl<<"Want to search another number? y/n : ";
  cin>>choice;

}while(choice=='y');





getch();
}