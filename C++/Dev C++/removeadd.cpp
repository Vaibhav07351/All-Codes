#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,n,x,y,z,val;
	vector<int >arr;
	string s;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{   
	    s.clear();
	    arr.clear();
	    cin>>n;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>val;
	        arr.push_back(val);
	    }
	    
	    vector<pair<int,int>> p;
	    
		for(int j=0;j<n;j++)
		{
			p.push_back(make_pair(arr[j],j+1));
		}
	    
		sort(p.begin(),p.end());
		set<int > m;
		for(int j=0;j<n;j++)
	    {
			m.insert(arr[j]);
			cout<<p[j].first<<" "<<p[j].second<<endl;

		}
	    
		int rep=arr.size()-m.size();
		cout<<endl<<"rep= "<<rep<<endl;
		int min= (n/2)-p[0].second;
	
		for(int j=0;j<rep;j++)
	    {
			if( abs( (n/2)-p[j].second) < min )
			{
			    min=abs ((n/2)- p[j].second );
			  
			}
		}
        
        cout<<min-1<<endl;


	}
	
	
	
	
	
	return 0;
}
