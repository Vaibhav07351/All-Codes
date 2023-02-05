#include<bits/stdc++.h>
#define int long long int
using namespace std;


int fact(int n)
{
	if(n==0)
	return 1;
	
	return n* fact(n-1);
	
}

int ncr(int n,int r)
{
	
	return fact(n)/(fact(r)*fact(n-r));
	
}


signed main()
{

	cout<<ncr(5,1);


	return 0;
}

