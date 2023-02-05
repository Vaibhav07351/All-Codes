#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
	int a,b,t,n,x,y,z,k,val;
	vector<int >arr,arr1;
	string s;
	
	cin>>n;
	cin.ignore();
	cin>>s;

	sort(s.begin(),s.end());

	cout<<(int)s[s.size()-1]-'a'+1<<endl;


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