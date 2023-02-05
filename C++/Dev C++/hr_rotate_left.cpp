#include <bits/stdc++.h>
#define int long long int
using namespace std;
int j=0;
signed main()
{
    
    int n,d,val;
    vector<int> arr;
    vector<int > arr2;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    for(int i=0;i<d;i++)
    {
        arr2.push_back(arr[i]);
    }
    
    
    
    for(int i=0;i<arr.size();i++)
    {   
     	 if(d+i>=arr.size())
		 {	
		 //	cout<<"a"<<arr2[j]<<endl;
		 	arr[i]=arr2[j];
		 	
		 	j++;
		 }	
         
     	
     		
	  	 if(d+i<arr.size())
     	 arr[i]=arr[d+i];
      
         
      	
    }
    
    cout<<endl<<endl;
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}








