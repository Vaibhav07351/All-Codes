#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,n,x,y,z,val;
	vector<int >arr,arr2;
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
	    
	    sort(arr.begin(),arr.end());
	    
	    for(int j=1;j<n;j++)
	    {
	        val=arr[j]-arr[j-1];
	        arr2.push_back(val);
	    }
	    
	   //for(int j=0;j<n-1;j++)
	   //{ 
	   //    cout<<arr2[j]<<" ";
	   //}   
	   //    cout<<endl;
	   int C1=0,C2=0,flag=0;
	   for(int j=0;j<n-1;j++)
	   {
	      if(arr2[j]==1)
	      C1++;
	      if(arr2[j]==2)
	      C2++;
	      if(arr2[j]!=1 && arr2[j]!=2)
	      {
	          flag=1;
	          break;
	      }
	   }
	   
	   if( (C1==C2+1 || C2==C1+1)  && flag==0)
	   {
	       cout<<"YES"<<endl;
	       continue;
	   }
	   
	    
	   flag=0;
	   for(int j=1;j<n-2;j++)
	   {
	       if(arr2[j-1]!=arr2[j]/2)
	       {
	           flag=1;
	       }
	   }
	    
	    if(flag==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}
