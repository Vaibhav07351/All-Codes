#include<bits/stdc++.h>
#define int long long int
using namespace std;



int ncr(int n,int r)
{
	
	if(r==0 || n==r)
	return 1;
	
	return ncr(n-1,r-1) + ncr(n-1,r);
	
	
}


signed main()
{

	cout<<ncr(1,0);


	return 0;
}

