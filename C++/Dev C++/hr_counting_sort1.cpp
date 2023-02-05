#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,val,max;
    vector<int >arr ;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        max=arr[i];
    }
    
    vector<int >arr2(max+1,0);
    
    cout<<max+1<<endl;
    
    for(int i=0;i<max+1;i++)
    {
        arr2[arr[i]]++;
        
    }
    for(int i=0;i<arr2.size();i++)
    {   
        cout<<arr2[i]<<" ";
    }
    
    
    
    return 0;
}
