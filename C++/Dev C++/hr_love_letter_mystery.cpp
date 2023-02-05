#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    
    int n,j,k=0,count=0;
    string s;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++)
    {
        s.clear();
        getline(cin,s);
        k=0;
        count=0;
        
        if(s.length()%2==0)
        {
            for(j=s.length()-1 ; j>=s.length()/2 ;j--)
            {	
            		if(s[j]<s[k])
            	{
            		while(s[j]!=s[k])
                   {	
             //   	cout<<"sj "<<s[j]<<"  sk "<<s[k]<<" "<<endl;
                    s[j]++;
                    count++;
                   }	
                
				}
            
            
                while(s[j]!=s[k])
                {
                    s[j]--;
                    count++;
                }
                k++;
            }
        }
            
        if(s.length()%2==1)
        {
            for(j=s.length()-1; j>=s.length()/2+1 ;j--)
            {	
            	if(s[j]<s[k])
            	{
            		while(s[j]!=s[k])
                   {	
          //      	cout<<"sj "<<s[j]<<"  sk "<<s[k]<<" "<<endl;
                    s[j]++;
                    count++;
                   }	
                
				}
            	
                while(s[j]!=s[k])
                {	
                	cout<<"sj "<<s[j]<<"  sk "<<s[k]<<" "<<endl;
                    s[j]--;
                    count++;
                }
                k++;
            }
            
        }
        
        cout<<count<<endl<<endl;
        
    }
    
    
  
        
   return 0;
}
