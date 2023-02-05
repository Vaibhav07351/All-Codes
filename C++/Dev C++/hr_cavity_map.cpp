#include <bits/stdc++.h>

using namespace std;

int main()
{
    int64_t n;
    
    cin>>n;
    
    char arr[n][n];
    for(int64_t i=0;i<n;i++)
    {
        for(int64_t j=0;j<n;j++)
        {
            cin>>(arr[i][j]);       
        }    
    }
    
    
    
    for(int64_t i=1;i<n-2;i++)
    {
        
        for(int64_t j=1;j<n-1;j++)
        {
                if(arr[i][j]>arr[i][j-1] &&arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j] )           
                arr[i][j]='X';
            
            
        }
        
    }
    
    for(int64_t i=0;i<n;i++)
    {
        for(int64_t j=0;j<n;j++)
        {
            cout<<(arr[i][j]);       
        }    
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}
