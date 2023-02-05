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

long double x,y,z,ya,yb,yc,l00,l01=0,l02=0,l10,l11,l12=0,l20,l21,l22,u00=1,u01,u02,u10=0,u11=1,u12,u20=0,u21=0,u22=1;

long double A[3][3] = {1,1,1,2,-1,3,3,1,-1};
long double B[1][3] = {3,16,-3};
long double X[1][3] = {x,y,z};
long double Y[1][3] = {ya,yb,yc};
long double *L[3][3] = {&l00,&l01,&l02,&l10,&l11,&l12,&l20,&l21,&l22};
long double *U[3][3] = {&u00,&u01,&u02,&u10,&u12,&u12,&u20,&u21,&u22};
long double *C[3][3];
int main()
{
	
	
	for(int row=0;row<3;row++)
	{
		for(int column=0;column<3;column++)
		{
		    
		    for(int c=0;c<3;c++)
		    {
		    	
		    	*C[row][column] += *L[row][c] * *U[c][column];
		    	
			}
				
		}
		cout<<endl;
	}
	
	
	
	

	
	for(int row=0;row<3;row++)
	{
		for(int column=0;column<3;column++)
		{
		
		   cout<<*L[row][column]<<"  ";
			
		}
		cout<<endl;
	}
	
	
	

	
	
return 0;	
}
