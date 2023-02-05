#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    
    int i=3,n,j=2,k,q,count=0,flag=0,val,flag1=0;
    stack<int > plate;
    stack<int > a;
    stack<int > b;
    vector<int> ans;
    
    cin>>n>>q;
    vector<int >prime(n+1,0);   

    prime[0]=2; 
     
    for(i=3;count<n;i++)
    {    
 
	        flag=0;
	        for( j=2 ; j<i ; j++)
	        {
	            if( (i% j) ==0)
	            { 
	                flag=1;
	                break;
	            }
	            
	        }        
	        
	
	        
	        if(flag==0)
	        {    
	          count++;
	          k=count;
	          prime[k]=i;
	          
	          
	        }
        
    }
    
   
     for(int i=0;i<n;i++)
    {
        cin>>val;
        plate.push(val);
    }
    
    
    
    for(int i=0;i<q;i++)
    {   
        
	        if(i%2==0)
	        {
	                while(!plate.empty())
	                {
	                        if(plate.top()%prime[i]==0)
	                        b.push(plate.top());
	                        else
	                        a.push(plate.top());
	                        
	                        plate.pop();
	                }
	                
	                while (!b.empty()) 
	                {
	                    ans.push_back(b.top());
	                    b.pop();
	                }
	        
	           
	        }
	  
	        
	        if(i%2==1)
	        {       
	                    
	                    while(!a.empty())
	                    {
	                            if(a.top()%prime[i]==0)
	                            b.push(a.top());
	                            else
	                            plate.push(a.top());
	                            
	                            a.pop();
	                    }
	                    
	                    while (!b.empty()) 
	                    {   
	                      ans.push_back(b.top());
	                        b.pop();
	                    }
	                    
	        }
        
        
        
      
    }
   
 
 
while (!plate.empty()) 
{   
   ans.push_back(plate.top());
    
    plate.pop();
}
    

  
 while (!a.empty()) 
{   
    ans.push_back(a.top());
    a.pop();
}


    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;        
   
    
    return 0;
}

