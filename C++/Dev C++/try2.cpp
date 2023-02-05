#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
	int a,b,t,n,x,y,z,k,val;
	vector<int >arr,arr1;
	string s;
	
	cin>>n;
		
	for(int j=0;j<n;j++)
	{
		cin>>val;
		arr.push_back(val);
	}
	
	vector<int>copy=arr;

	sort(arr.begin(),arr.end());
	int maxx=arr[n-1];
	int smax=arr[n-2];

	for(auto it:copy)
	{
		if(it==maxx)
		cout<<maxx-smax<<" ";
		else
		cout<<it-maxx<<" ";
	}

	cout<<endl;

}



signed main() 
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	int t;

	cin>>t;
	
	while(t--)
	{
		solve();
	}
	
	return 0;
	
}