#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,result,sum1=0,sum2=0; 
    cin>>n;
    int arr[n][n]; 
    
    for(int i=0;i<n;i++)     //taking input
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];   
        }         
    }
    
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
           if(i==j) 
           sum1=sum1+arr[i][j];    
        }         
    }
    
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i+j==(n-1)) 
           sum2=sum2+arr[i][j];    
        }         
    }
    
    int abs_diff= abs(sum1-sum2);
    
    cout<<abs_diff;
    
    return 0;
}

