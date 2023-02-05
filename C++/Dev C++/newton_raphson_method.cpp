#include<iostream>             - //for cin cout
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

	int n;
	long double newx;
	long double  y;
	long double  z;
	long double  x ;	
	
	
	long double fun(long double x)         
	{
		long double newx;
		
		y = ( log(x) + sin(4*x) +0.5 );                    //put real given equation f(x) = y 
		
		return y;		
	}
	
	
	
	long double funx(long double x)         
	{
		long double sol;
		
		sol = x -(( log(x) + sin(4*x) +0.5 )/((1/x)+4*cos(4*x))) ;                      //write final X(n+1) = ( Xn - f(Xn) / f`(Xn)  )  equation here 
		
		return sol;		
	}
	

int main()
{
	
	for(x=-1;x<11;x++)           //change initial x value if intital given where roots lie
	{
	   if ( ( fun(x)<0 && fun(x+1)>0 ) || ( fun(x)>0 && fun(x+1)<0 )  )	
	   	  break;
	}
		
	cout<<"Roots bw "<<x<<" and "<<x+1;
	
	newx= (x+x+1)/2;
	
	for(int i=0;i<30;i++)
	{
		newx=funx(newx);
	    cout<<endl<<"X"<<i+1<<" = "<<setprecision(10)<<newx;
		
    }

	
	
return 0;	
}
