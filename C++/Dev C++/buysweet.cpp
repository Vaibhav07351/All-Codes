#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,n,x,y,z,r,val;
	vector<int >cost;
	vector<int>cback;
	vector<int>minus;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    cost.clear();
	    cback.clear();
	    minus.clear();
	    cin>>n>>r;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>val;
	        cost.push_back(val);
	    }
	    	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>val;
	        cback.push_back(val);
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        minus.push_back(cost[j]-cback[j]);
	    }

	    vector<int >trial;
	    trial=cost;
	    sort(trial.begin(),trial.end());
	    
	    int mincost=trial[0];
        int minp=0;
	    int count=0;
	    int min=minus[0];
        
	    for(int j=0;j<n;j++)
        {
            if(minus[j]<min)
            {
                min=minus[j];
                minp=j;
            }
        }
    	    
        count+=(r-mincost)/minus[minp];

    //     r=r-count;
    //     cout<<"r= "<<r<<endl;
    //     vector<pair<int ,int >> p;
    //     for(int j=0;j<n;j++)
    //     {
    //         p.push_back(make_pair(cost[j],cback[j]));
    //     }
        
    //     sort(p.begin(),p.end());
        
    //     int b=0;
    //     while(r>=p[b].first)
    //     b++;
    //    // cout<<"r= "<<r<<endl;
    //     b--;
    //     while(r>=p[b].first && b>=0)
    //     {
    //         r=r-p[b].first+p[b].second;
    //         b--;
    //         count++;
    //      //   cout<<"r= "<<r<<endl;
    //     }

        cout<<count+1<<endl;

    
        









	}



	
	
	
	return 0;
}
