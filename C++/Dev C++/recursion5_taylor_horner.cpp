#include<bits/stdc++.h>
#define int long long int
using namespace std;


double tay(double x, double t)
{
	
	static double s=1;
	
	if(t==0)
	return s;
	
	s= 1+ x/t*s;
	
	tay(x,t-1);
	
	
}



signed main()
{

	cout<<tay(3,2);


	return 0;
}

