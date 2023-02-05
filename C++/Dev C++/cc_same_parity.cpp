#include <bits/stdc++.h>
using namespace std;
#define int long long int

int Count(string s)
{
    int c;
    auto it = s.find("01");
    while(it!=string::npos)
    {
        c++;
        it=s.find("01", it + 2);
    }
    
    return c;
    
}


signed main() 
{
	int t,val,n,j=0;
	string s;
	
	cin>>t;
	
	for(int i=0;i<t;i++)
	{   
	    int count=0;
	    s.clear();
	    cin>>n;
	    cin.ignore();
	    cin>>s;
	    
	    if(n==1)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    
	    count=Count(s);
	    cout<<count<<endl;
	    // sort(s.begin(),s.end());
	    
	    
	    // for(j=0;j<n;j++)
	    // {
	    //     if(s[j]==1)
	    //     break;
	    // }
	    
	    // for(int k=1;k<n && j<n;k++)
	    // {
	    //     swap(s[k],s[j]);
	    //     j++;
	    // }
	    
	    // int cnew=Count(s);
	    // cout<<s<<"dsd"<<count<<endl;
	    // if(cnew>count)
	    // cout<<cnew<<endl;
	    // else
	    // cout<<count<<endl;
	}
	
	
	
	
	
	return 0;
}

