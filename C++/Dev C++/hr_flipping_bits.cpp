#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int q,n,r,sum=0,temp;
    vector<int > arr; 
    cin>>q;
    for(int i=0;i<q;i++)
    {
        sum=0;
        arr.clear();
        cin>>n;
        temp=n;
        while(temp!=0)
        {
            r=temp%2;
            arr.push_back(r);
            temp=temp/2;
        }
        
        reverse(arr.begin(),arr.end());
        
        vector<int > arr2(32-arr.size(),0);
        
        for(int k=0;k<arr.size();k++)
        {
            arr2.push_back(arr[k]);
        }
        
        reverse(arr2.begin(),arr2.end());
        
        
        for(int j=0;j<arr2.size();j++)
        {
            if(arr2[j]==1)
            {
                arr2[j]=0;
                continue;
            }
            if(arr2[j]==0)
            {
                arr2[j]=1;
                continue;
            }
        }
        
        for(int j=0;j<arr2.size();j++)
        {
            sum+=arr2[j]*pow(2,j);
        }
        
        cout<<sum<<endl;
    }
    
    
    
    
    
    return 0;
}
