#include<bits/stdc++.h>
#define int long long int
using namespace std;

int fact(int n)
{
	if(n==0)
	return 1;
	
	
	return n*fact(n-1);
	
	
}

signed main()
{
	int n,val;
	
	val=fact(5);
	
	cout<<endl<<val;
	
	
	
	return 0;
}

