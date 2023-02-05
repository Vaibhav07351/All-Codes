#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,x,y;
	string s,s2,s3;
	vector<int >arr;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{   
	    s.clear();
	    s2.clear();
	    s3.clear();
	    arr.clear();
	    cin>>x>>y;
	    
	    if((x+y)%2==0 && (x%2==1)) 
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    if(x<y )
	    {
	        for(int j=0;j<x/2;j++)
	        s.append("a");
	        for(int j=0;j<y;j++)
	        s.append("b");
	        for(int j=0;j<x/2;j++)
	        s.append("a");
	        
	        
	    }
	    
	    if(x>y )
	    {
	        for(int j=0;j<x/2;j++)
	        s.append("b");
	        for(int j=0;j<y;j++)
	        s.append("a");
	        for(int j=0;j<x/2;j++)
	        s.append("b");
	        
	        
	    }
	    
	    cout<<s<<endl;
	    if(x<y)
	    {
	    for(int j=0;j<(x+y)/4;j++)
	    s2.append("ba");
	    s3=s2;
	    s2.append("bb");
	    reverse(s3.begin(),s3.end());
	    s2.append(s3);
	    
	    }
	    else
	    {
	    for(int j=0;j<(x+y)/4;j++)
	    s2.append("ba");
	    s3=s2;
	    s2.append("aa");
	    reverse(s3.begin(),s3.end());
	    s2.append(s3);
	    
	    }
	    cout<<s2<<endl;
	    
	}
	
	
	
	
	
	return 0;
}
