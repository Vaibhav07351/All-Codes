#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[50],count=0;

    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];    

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0 && arr[i+1]==1 && i+1<n)
        {
            count++;
            i=i+1;
            cout<<"Value of i is11 : "<<i<<endl;
            continue;
        }
        
        if(arr[i]==0 && arr[i+1]==0 && i+1<n)
        {  
            if(arr[i]==0 && arr[i+2]==0&& i+2<n && i+1<n)
            {
                count++;
                i=i+1;
                cout<<"Value of i is22 : "<<i<<endl;
                continue;
            }
            
            count++;
                 
        }
        
        cout<<"Value of i is33 : "<<i<<endl;
    }
    
    
    cout<<count;
    
    return 0;
}
