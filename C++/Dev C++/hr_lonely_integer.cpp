#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,val,flag=0;
    vector<int> arr;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    for(int i=1;i<n;i+=2)
    {
        if(i==(n-1) && arr[i]!=arr[i-1])
        {   
            flag=1;
            cout<<" i= "<<i<<"  "<<endl;
            cout<<arr[i];
            break;
        }
     
        if(arr[i]!=arr[i-1])
        {
        	cout<<" i= "<<i<<"  "<<endl;
            cout<<arr[i];
            break;
        }
     
    }
    
    if(arr[n-1]!=arr[n-2] && flag==0)
        {
        	cout<<"end "<<endl;
            cout<<arr[n-1];
            
        }
    
    
    return 0;
}
