#include<bits/stdc++.h>
#define int long long int
using namespace std;

int powern(int n,int p)
{
	if(p==0)
	return 1;
	
	return n* powern(n,p-1) ;
	
}

signed main()
{
	int n,val;
	
	val=powern(7,3);
	
	cout<<endl<<val;
	
	
	
	return 0;
}

