#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,val,count=0,max,count2=0;
    vector<int > arr;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    max=1;
    
    for(int i=0;i<n;i++)
    {	
    	count=0;
            
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        
        if(count>=max)
        max=count;    
        
    }
    
    cout<<n-max;
    
    return 0;
}

