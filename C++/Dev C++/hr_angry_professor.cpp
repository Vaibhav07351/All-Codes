#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int no_of_case,val,count=0,l=0;
    vector<int > arr,n,k;
    
    cin>>no_of_case;
    
    
    for(int i=0;i<no_of_case;i++)
    {   
            count=0;
            cin>>val;
            n.push_back(val);
            cin>>val;
            k.push_back(val);
            
           // arr.clear();
                
                
            for(int j=0;j<n[i];j++)
            {
                cin>>val;
                arr.push_back(val);
            }
        
            
            for(l=0;l<n[i];l++)
            {
                if(arr[l]<=0)
                count++;
            }        
        
            if(count>=k[i])
            cout<<"NO"<<endl;
            
            else
            cout<<"YES"<<endl;
        
         for(int j=0;j<n[i];j++)
            {
                
                arr.pop_back();
            }
        
        
    }
    
    
    
    
    
    
    
    
    return 0;
}

