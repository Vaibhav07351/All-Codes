#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main() 
{
    
    int t,n,val;
    vector<int> arr;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        arr.clear();
        int ne=0,no=0,nz=0;
        cin>>n;
        
        for(int j=0;j<n;j++)
        {
            cin>>val;
            if(val%2==0)
            ne++;
            else 
            no++;
      
        }
        
        if(ne==0 || no==0 || nz>0)
        {
            cout<<0<<endl;
            continue;
        }
       
         if(no%2==1)
        cout<<ne<<endl;
        else
       
        {
            
            cout<<min(no/2 , ne )<<endl;
            
        }
       
       
       
    }
    
    
	return 0;
}
