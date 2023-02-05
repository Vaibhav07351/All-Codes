#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    
    int t,k=0,i,count=0;
    cin>>t;
    
	for(i=0;i<t;)
    {
    	i=i + 3*pow(2,k);
    	k++;
	}
    
    cout<<i;
    
    cout<<endl<<i-t +1;
    
    return 0;
}
