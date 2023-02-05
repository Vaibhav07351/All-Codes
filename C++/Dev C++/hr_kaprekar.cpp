#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int  p,q,half1=0,half2=0,num,r,temp;
    vector<int > arr;    
	cin>>p>>q;

    for(int i=p;i<=q;i++)
    {   
    	arr.clear();
        half1=0;
        half2=0;
       
		num=i*i;   	
	    
	 //   cout<<" NUM= "<<i<<endl;
	    while(num>0)
	    {
	    	r=num%10;
	    	arr.push_back(r);
	    	num/=10;
		}
	   reverse(arr.begin(), arr.end());
	   
//	   for(int k=0;k<arr.size();k++)
//	   cout<<arr[k];
//	   cout<<endl;


        for(int j=0;j<arr.size()/2;j++)
        {
            half1=half1*10+arr[j];
        }
        
        for(int j=arr.size()/2;j<arr.size();j++)
        {
            half2=half2*10+arr[j];
        }       
       
//	   cout<<"half1= "<<half1<<" half2= "<<half2;
//	   cout<<endl;
	    
        if(i==(half1+half2))
        cout<<i<<" ";
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
}

