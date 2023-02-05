#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
	int n;
	
	cout<<"Enter n: ";
	cin>>n;

	if(n%2==0)
	{
		for(int i=2;i<=n;i+=2)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		for(int i=1;i<=n;i+=2)
		{
			cout<<i<<" ";
	}
	}

	return 0;
}

