#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main() 
{
    
    int t,n;
    vector<int>arr;
    string s;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin.ignore();
        cin>>s;
        
        string s2;
        for(int j=0;j<n;j++)
        s2.append("0");
 
        int flag=0;
        
        if(s==s2)
        {
            cout<<0<<endl;
            continue;
        }
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='1'&&s[j+1]=='1')
                {
                    cout<<2<<endl;
                    flag=1;
                    break;
                }
            }

        if(flag==0)
        cout<<1<<endl;
        
    }
    
    
    
	return 0;
}
