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

    vector<int>unq;
    unq.push_back(arr[0]);

    for(auto it:arr)
    {
      if((unq[unq.size()-1])!=it  )
      unq.push_back(it);
    }

    vector<int>asc=unq,desc=unq;
    sort(asc.begin(),asc.end());
    sort(desc.begin(),desc.end());
    reverse(desc.begin(),desc.end());

    if(unq==asc || unq==desc)
    {
      cout<<"YES"<<endl;
    //   for(auto it :unq)
    // cout<<it<<" ";
    // cout<<endl;
      return;
    }

    int flag=0;
    for(int i=1;i<n-1;i++)
    {
      if( unq[i-1]>unq[i] && unq[i]<unq[i+1] && flag==1)
      {
        flag=2;
        break;
      }
      if( unq[i-1]>unq[i] && unq[i]<unq[i+1] || unq[1]>unq[0] )
      flag=1;
    }

    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    // for(auto it :unq)
    // cout<<it<<" ";
    // cout<<endl;

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