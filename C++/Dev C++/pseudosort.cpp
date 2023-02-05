#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,n,val;
	vector<int >arr;
	vector<int>arr2;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    arr.clear();
	    arr2.clear();
	    cin>>n;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>val;
	        arr.push_back(val);
	    }
	    
	    arr2=arr;
	    sort(arr2.begin(),arr2.end());
	    
        for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
        cout<<endl;
        for(int j=0;j<n;j++)
        cout<<arr2[j]<<" ";
        cout<<endl;
	    if(arr==arr2)
	    {
	        cout<<"YES"<<endl;
	        continue;
	    }
	   
	    int count=0;
	    
        for(int j=0;j<n-1;j++)
   	    {
	        if(arr2[j]!=arr[j] && arr2[j+1]!=arr[j+1]  )
	        {
	            count++;
	        }
	    }
        
      //  cout<<count<<endl;
	        
         if(count==1)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    
	  
	    
	    
	}
	
	
	
	
	
	return 0;
}
