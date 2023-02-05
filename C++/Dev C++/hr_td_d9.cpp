#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,r,count=0,flag=0,max=0;
    vector<int > arr;
    cin>>n;
    
    while(n!=0)
    {
        r=n%2;
        arr.push_back(r);
        n/=2;
    }
    
    reverse(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<arr.size();i++)
    {   
    	if(i==0 && arr[i]==1)
    	{
    		count++;
    		max=1;
    	//	 cout<<"i = "<<i <<" count = "<<count<<" max = "<<max<<endl;
    		 
    		continue;
		}
		
        if(arr[i]==arr[i-1])
        {	
            count++;
            if(count>max)
            max=count;
        }
        
        if(arr[i]!=arr[i-1])
        {	
        	if(count>max)
            max=count;
            
            count=1;
        }
        
        
    //    cout<<"i = "<<i <<" count = "<<count<<" max = "<<max<<endl;
    }
    
//  
//    if(max==0)
//    {
//        for(int i=0;i<arr.size();i++)
//        {
//                if(arr[i]==1)
//            {
//                cout<<1;
//                break;
//            }
//        }
//    }
//    else
    cout<<max;
    
    
    
    return 0;
}


