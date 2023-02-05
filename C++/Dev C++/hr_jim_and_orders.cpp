#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,val1,val2,sum;
    vector<int >a;
    vector<vector<int> > arr;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        a.clear();
        cin>>val1>>val2;
        sum=val1+val2;
        a.push_back(i+1);
        a.push_back(val1);
        a.push_back(val2);
        a.push_back(sum);
        arr.push_back(a);
    }
    cout<<endl;
  
    
    for(int i=0;i<n;i++)
    cout<<arr[i][0]<<" ";
    
    
    return 0;
}
