#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int n,m,val,count=0,max=0,count2=0;
    string s;
    cin>>n>>m;
    
    vector<string > arr;
    vector<int > arr2;
    
    for(int i=0;i<n;i++)
    {   
        cin>>s;
        arr.push_back(s);
    }
    cout<<endl;
    
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {   
            count=0;
            for(int k=0;k<m;k++)
            {
                if(arr[i][k]=='1' || arr[j][k]=='1')
                {
                    count++;
                }
    
            }
            
            
        if(count>max)
        max=count;           
        
        //if(count==max  )    
       // count2++;
        
		arr2.push_back(count);    
            
         cout<<"count = "<<count<<"  max = "<<max<<"  count2= "<<count2<<endl;
        
        }
        
       
    }
    
    
    for(int i=0;i<arr2.size();i++)
    {
    	if(arr2[i]==max)
    	count2++;
    	
	}
    
    
    
    cout<<count<<endl<<count2;
    
    
    
    return 0;
}
