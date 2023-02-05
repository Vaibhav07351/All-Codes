#include<iostream>              //for cin cout
#include<stdlib.h>              //for  clear screen -> system("CLS")
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<math.h>
#include<ctype.h>
#include<typeinfo>
#include<limits.h>
#include <cwchar>
#include<iomanip>
using namespace std;


	long double x=0;
	long double  y;
	long double newx;
	long double upperlimit;
	long double lowerlimit;

	
	long double fun(long double x)
	{
		y= ( log(x) + sin(4*x) +0.5 );               //change to the given function
		
		return y;
		
	}

int main()
{
	
	
	for(x=-10;x<11;x++)                    //change initial x value if intital given where roots lie
	{
	   if ( ( fun(x)<0 && fun(x+1)>0 ) || ( fun(x)>0 && fun(x+1)<0 )  )	
	   	  break;
	}
	
	
	cout<<"Roots bw "<<x<<" and "<<x+1;
	lowerlimit=x;
	upperlimit=x+1;
	
	for(int i=0;i<30;i++)
	{
	
			newx=(lowerlimit+upperlimit)/2;
		
		    cout<<endl<<"f ( "<< newx<<" ) = "<<setprecision(9)<< fun(newx); 
		
			
			if( (fun(newx) )< 0  && fun(lowerlimit)<0  || (fun(newx) )> 0  && fun(lowerlimit)>0  )
			{
				lowerlimit= newx;
			    
			    
			}
			
			else
			{
				upperlimit=newx;
			}

        
   }
   
	
	
	
return 0;	
}
