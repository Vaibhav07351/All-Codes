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
  int a[50],n,i,num,j ;

  cout<<"Enter the no. of terms u want to enter : ";
  cin>>n;

  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }


  cout<<endl<<endl<<"Enter the number for operation : "  ;
  cin>>num;

  for(i=0;i<n;i++)
  {
      if(a[i]==num)
      a[i]=0;
      cout<<a[i]<<" ";
  }

		    cout<<endl;

  for(i=n-1 ;i>=0; i--)
  {
      if(a[i]==0)
      {
	 j=i;
	 int k=i-1;

	 for(k;k>=0;k--)
	 {
	     if(a[k]!=0)
	      {
	       a[j]=a[k];
	       a[k]=0;
	//       cout<<k<<" ";
	       break;
	      }
	 }
      }

  }

	     cout<<endl<<endl;
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";


getch();
}
