#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
void main()
{                                      //choice stores menu choice
  clrscr();                            //ch1 stores y/n
  int n,i,choice,flag=0,choice2;       //choice2 stores after choice
  char a[40][40] , b[40] , ch1,p[40];
   // taking values first...

  cout<<"Enter the number of terms you want to insert the string :  ";
  cin>>n;

  for(i=0; i<n ; i++)
  {
    cout<<"Enter string "<<i+1<<"  : ";
    gets(a[i]);
  }

  cout<<endl;

  //Menu
do
{

  cout<<"Your Menu is as follows -> ";
  cout<<endl<<"1. Check for pallindrome (ignoring the cases)...";
  cout<<endl<<"2. Search... ";
  cout<<endl<<"3. Reverse the entered string..";
  cout<<endl<<"4. Change to capital or small....";

  cout<<endl<<endl<<"Enter you menu number i.e (1,2,3,4) ->  ";
  cin>>choice;
  cout<<endl<<endl;

  //Work for option 1

  if(choice==1)
  {
   do
   {     flag=0;
     cout<<"Enter the string number for which you want to check for pallindrome : ";
     cin>>i;
     if(i>n || i<1)
     {
	do
	{
	   cout<<"incorrect number entered.. Enter again : ";
	   cin>>i;
	}while(i>=n || i<1) ;
     }
		   strcpy(p,strrev(a[i-1]));
		   strrev(a[i-1]);

	      if(   strcmpi( a[i-1] ,p  ) ==0    )
	     {
		 cout<<endl<<"Hurrey!! "<<a[i-1]<<" is a pallindrome..";
	     }

	      else
		 cout<<endl<<a[i-1]<<" is not a pallindrome..";


     cout<<endl<<"Want to check another number? (y/n) : ";
     cin>>ch1;
     cout<<endl;
   } while(ch1=='y');


  cout<<endl<<endl<<"Now enter what u wanna do now? ";
  cout<<endl<<"1. wanna leave now ..";
  cout<<endl<<"2. wanna go back to the menu...";
  cout<<endl<<"come on enter man : ";
  cin>>choice2;
  if (choice2==1)
  exit(0);
 }

 cout<<endl<<endl;

}while(choice2==2);

  // working for choice 2

   if(choice==2)
  {
     do
    {
	  flag=0;
	  cout<<"Enter the string u want to search :  ";
	  gets(b);

	    for(i=0;i<n;i++)
	  {
		 if(strcmpi(a[i],b)==0)
		{
		  flag=1;
		  cout<<b<<" is at "<<i+1<<" position.";
		}

	  }

	  if(flag==0)
	  cout<<b<<" not found ...";

	  cout<<endl<<"Want to check another number? (y/n) : ";
	  cin>>ch1;
	  cout<<endl;


      } while(ch1=='y');


      cout<<endl<<endl<<"Now enter what u wanna do now? ";
      cout<<endl<<"1. wanna leave now ..";
      cout<<endl<<"2. wanna go back to the menu...";
      cout<<endl<<"come on enter man : ";
      cin>>choice2;
      if (choice2==1)
      exit(0);


}

getch();
}