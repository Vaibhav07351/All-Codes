#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,val,page=1,count=0,count1=1;
    vector<int > arr;
    
    cin>>n;
    cin>>k;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<=arr[i];j++)
        {	
        
            if( j>k && j%k==0 && count1!=1 || (j==1 &&count1!=1) )
            page++;
        
			cout<<"j = "<<j<<"page = "<<page<<endl;
			    
            if(j==page)
            count++;
            
            count1++;
        }
        
    }
    
    cout<<count;
    
    
    return 0;
}

