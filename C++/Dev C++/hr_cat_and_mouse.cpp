#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,val,catA=0,catB=0;
    vector<int> arr;
    
    cin>>n;
    
    for(int i=0;i<n*3;i++)
    {
        cin>>val;
        arr.push_back(val);
    }    
    
    
    for(int j=0;j<n*3;j+=3)
    {
        
            
            if(arr[j]<=arr[j+2])
            catA=arr[j+2]-arr[j];
            
            if(arr[j]>=arr[j+2])
            catA=arr[j]-arr[j+2];
            
            
            if(arr[j+1]<=arr[j+2])
            catB=arr[j+2]-arr[j+1];
            
            if(arr[j+1]>=arr[j+2])
            catB=arr[j+1]-arr[j+2];
            
            
        
        
      //  cout<<endl<<catA<<" "<<catB<<endl;
        
    	if(catA==catB || (catA==0 && catB==0 ))
        {cout<<"Mouse C";
        continue;
		}
        
        if(catA>catB || catB==0)
        cout<<"Cat B";
        
        if(catA<catB || catA==0)
        cout<<"Cat A";
        
    
        
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}

