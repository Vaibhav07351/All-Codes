#include <bits/stdc++.h>

using namespace std;

int main()
{
    int start,end,divisor,temp,r,rev_no=0,count=0;
    
    cin>>start;
    cin>>end;
    cin>>divisor;
    
    for(int i=start;i<=end;i++)
    {
        temp=i;
        rev_no=0;
        while(temp!=0)
        {
            r=temp%10;
            rev_no=rev_no*10+r;
            temp/=10;
        }
        
        if(((abs(i-rev_no)) % divisor)   ==0)
        {
            count++;
        }
        
        cout<<i<<"  "<<rev_no<<endl;
        
    }
    
    cout<<count;
    
    
    
    return 0;
}
