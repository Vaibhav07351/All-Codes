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
    
    for(int i=0;i<n;i++)
    {
        arr2[arr[i]]++;
        
    }
    cout<<endl;
 	for(int i=0;i<max+1;i++)
    {   
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<max+1;i++)
    {   
        for(int j=0;j<arr2[i];j++)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    
    return 0;
}

