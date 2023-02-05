#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[n],pos_count=0,neg_count=0,zero_count=0;
    double pos=0.0,neg=0.0,zero=0.0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        pos_count++;
        
        if(arr[i]<0)
        neg_count++;
        
        if(arr[i]==0)
        zero_count++;
    }
    
    pos=( double((pos_count))/double(n) );
    neg=( double((neg_count))/double(n) );
    zero=( double(zero_count)/double(n) );
    
    cout << fixed << setprecision(6) << pos;
    cout<<endl << fixed << setprecision(6) << neg;
    cout<<endl << fixed << setprecision(6) << zero;
    
    
  return 0;  
}

