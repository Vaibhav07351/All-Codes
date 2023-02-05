#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main() 
{
    
    int t,n,val;
    vector<int> arr;
    set<int > s;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            sum+=val;
        }
        
        int a=1;
        while((a)*(a+1)<=2*sum)
        {a++;
        }
        cout<<a-1<<endl;
        
        
        

        
    }
    
    
    
    
    
    
	return 0;
}
