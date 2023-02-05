#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int arr[10000],max,min,max_sum=0,min_sum=0;
    
    for (int i=0;i<5;i++)
    cin>>arr[i];
    
     max=arr[0];
     min=arr[0];
     
    for(int i=0;i<5;i++)
    {   
        if(arr[i]>max)
        max=arr[i];
        
        if(min>arr[i])
        min=arr[i];
    }
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]==max)
        continue;
        
        min_sum+=arr[i];
    }
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]==min)
        continue;
        
        max_sum+=arr[i];
    }
    
    cout<<min_sum<<" "<<max_sum;
   // cout<<endl<<min<<" "<<max;
    return 0;
}

