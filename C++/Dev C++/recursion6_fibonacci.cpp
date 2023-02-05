#include<bits/stdc++.h>
#define int long long int
using namespace std;


int fib(int n)
{
	if(n<=1)
	return n;
	
	return fib(n-2)+fib(n-1);
	
}


signed main()
{	
	int n;
	cin>>n;
	cout<<endl;
	cout<<fib(n);



	return 0;
}

