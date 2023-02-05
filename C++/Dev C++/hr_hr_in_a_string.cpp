#include <bits/stdc++.h>
#define long long int
using namespace std;

signed main()
{
    
    string hr="hackerrank";
    string s;  
    int n;
    
    cin>>n;
    int k=0;
     cin.ignore();
    for(int i=0;i<n;i++)
    {	
    	 k=0;
    	
         getline(cin,s);
        
        for(int j=0;j<s.length();j++)
        {
            
            if(s[j]==hr[k])
            {
                k++;
            }    
            
        }
        
        cout<<k<<endl;
        if(k==10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    
    
    
    
    
    return 0;
}
