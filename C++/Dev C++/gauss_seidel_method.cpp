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
	
	long double eq1(long double y , long double z)                          //rearrange equations first heighest on diagonal before entering
	{
		long double x;
		x = (-17-4*y-z )/9 ;
		
		return x;		
	}
	
		
	long double eq2(long double x , long double z)
	{
		long double y;
		y=(4.-x)/6;
		
		return y;		
	}

	long double eq3(long double x , long double y)
	{
		long double z;
		z= -(14.-x+2*y)/6;
		
		return z; 		
	}


int main()
{
	
	y=0,z=0;
	
	for(int i=0;i<10;i++)
	{
	
			x=eq1(y,z);
			y=eq2(x,z);
			z=eq3(x,y);
			
			cout<<endl<<"x = "<<x <<endl<<"y = "<<y<<endl<<"z = "<<z;
			cout<<endl<<endl;
    }

	
	
return 0;	
}
