#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    
   int first,diff,max,money,sum=0,flag=0,count=0; 
    
   cin>>first>>diff>>max>>money; 
    
    for(int i=first;i>=max;i-=diff)
    {
        
        sum+=i;
        
        
     
        if(sum==money|| sum>money)
        {
            flag=1;
            break;
       }
       // cout<<"i = "<<i<<" sum= "<<sum<<" count= "<<count<<endl;
           count++;
        
    }
    
   // cout<<endl<<"sum= "<<sum<<" money= "<<money<<endl;
    for(sum;sum<=money;)
    {
        if(sum<money && sum+max<=money)
        {	
            sum+=max;
            count++;
            
      //      cout<<" sum= "<<sum<<" count= "<<count<<endl;
        }
        else
        break;
    }
    
    
    if(first<money)
    cout<<count;
    else 
    cout<<0;
    
    
    return 0;
}
