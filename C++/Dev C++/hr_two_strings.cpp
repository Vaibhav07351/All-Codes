#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,flag=0;
    string s1,s2;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++)
    {
        s1.clear();
        s2.clear();
        cin>>s1>>s2;
        flag=0;
        for(int j=0;j<s1.length();j++)
        {
                if(s2.find(s1[j])!= string::npos)
                {   
                    flag=1;
                    break;
                }
 
        }
        
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    
    
    
    
    return 0;
}

