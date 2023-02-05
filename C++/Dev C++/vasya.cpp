#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t,int a,int b;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a>>b;

        if(a==0)
        cout<<1<<endl;
        else
        cout<<a+(2*b)+1<<endl;


    }



    return 0;
}
