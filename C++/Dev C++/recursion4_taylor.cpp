#include<bits/stdc++.h>
#define int  double
using namespace std;

int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
	
}

int taylor(int x ,int t)
{
	if(t==0)
	return 1;
	
	
	
	return  pow(x,t)/fact(t) +  taylor(x,t-1);
	
	
}

signed main()
{
	int n,val;
	
	val=taylor(1,7);
	
	cout<<endl<<val;
	
	
	
	return 0;
}

