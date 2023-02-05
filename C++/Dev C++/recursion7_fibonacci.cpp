#include<bits/stdc++.h>
#define int long long int
using namespace std;

int arr[20];

int fib(int n)
{
	if(n<=1)
	{
	   arr[n]=n;	
	   return n;
	}
	else
	{
		if(arr[n-2]==-1)
		{
			arr[n-2]=fib(n-2);
		}
		
		if(arr[n-1]==-1)
		{
			arr[n-1]=fib(n-1);
		}
		
		return arr[n-2] + arr[n-1];
	}
	
	
}


signed main()
{	
	
	for(int i=0;i<20;i++)
	{
		arr[i]=-1;
	}
	
	int k;
	cin>>k;
	cout<<endl;
	cout<<fib(k);



	return 0;
}

