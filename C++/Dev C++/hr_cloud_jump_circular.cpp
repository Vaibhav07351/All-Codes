#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_clouds,jump_dis,val,e=100,flag=0;
    vector<int > arr;
    
    cin>>no_clouds;
    cin>>jump_dis;
    
    for(int i=0;i<no_clouds;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    for(int i=0;i<1000;i+=jump_dis)
    {
      //  cout<<"i = "<<i <<" e = "<<e<<endl;
        
      
        flag=1;
        
        if(arr[(i+jump_dis) % no_clouds] ==1 )
        {
            e-=3;
            
           
           // continue;
        }
        
        
        if(arr[(i+jump_dis) % no_clouds] ==0 )
        {
            e-=1;
           
           // continue;
        }
        
          if(flag==1 &&  ((i+jump_dis) % no_clouds)==0 )
        {
        	break;
		}
        
        
        
    }
    
    
    cout<<e;
    
    
    
    return 0;
}

