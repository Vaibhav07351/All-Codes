#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    vector<int>arr={1,2,3,4,5,6,7,8,9};

    vector<int>prefix(arr.size(),0);
    int l=0,r=4,ans=0;
    prefix[0]=arr[0];

    for(int i=1;i<prefix.size();i++)
    prefix[i]=prefix[i-1]+arr[i];

    if(l>0)
    ans=prefix[r]-prefix[l-1];
    else
    ans=prefix[r];

    cout<<ans<<endl;



    return 0;
}