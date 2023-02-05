#include<bits/stdc++.h>
#define int long long int
using namespace std;

int sumn(int n)
{
	int sum=n;
	
	if(n==0)
	return 0;
	
	else
	return( sum+ sumn(n-1) );
	
}

signed main()
{
	
	int n,summ;
	summ=sumn(10);

	cout<<endl<<summ;

	return 0;
}

