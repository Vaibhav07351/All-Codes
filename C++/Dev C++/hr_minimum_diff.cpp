#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,val,diff=-1,min,flag=0;
    vector<int > arr;
    cin>>n;
    
    min=n;
    for(int i=0;i<n;i++)
    {   
        cin>>val;
        arr.push_back(val);   
    }
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            diff=j-i;
        }
        
        if(diff<min && diff>0)
        {
            min=diff;
            flag=1;
        }
      //  cout<<"min= "<<min<<"    diff= "<<diff<<endl;
    }   
    
    if(flag==1)
    cout<<min;
    else
    cout<<"-1";
    
    
    return 0;
}

