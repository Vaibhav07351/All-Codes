#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V,n,val;
    vector<int > arr;
    
    cin>>V;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==V)
        {
            cout<<i;
            break;
        }
        
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
