#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int s,t,a,b,m,n,valA,valB,countA=0,countB=0;
    vector<int > apple_dis,orange_dis,apple_range,orange_range;
    
    cin>>s>>t>>a>>b>>m>>n;
    
    for(int i=0;i<m;i++)
    {
        cin>>valA;
        apple_dis.push_back(valA);       
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>valB;
        orange_dis.push_back(valB);       
    }
    
    for(int i=0;i<m;i++)
    {
        apple_range.push_back(apple_dis[i]+a);
    }

    for(int i=0;i<n;i++)
    {
        orange_range.push_back(apple_dis[i]+b);
    }

    for(int i=0;i<m;i++)
    {
       cout<< apple_range[i]<<" ";
    }
	
	cout<<endl;
	
    for(int i=0;i<n;i++)
    {
      cout<<  orange_range[i]<<" ";
    }
cout<<endl;




    
    for(int i=0;i<m;i++)
    {
       if(apple_range[i]>=s && apple_range[i]<=t)
       countA++;       
    }    
    
    for(int i=0;i<n;i++)
    {
       if(orange_range[i]>=s && orange_range[i]<=t)
       countB++;       
    }    
    
    cout<<countA;
    cout<<endl<<countB;
    
    

	return 0;
}


