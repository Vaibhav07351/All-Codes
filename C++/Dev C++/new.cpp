#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;cin>>n;
        if(n%2 == 1)
        {
            if(n == 3)
            {
                cout<<-1<<endl;
                return;
            }
            int i = n-(n/2)-1 , j = i-1;
            int one = 1;
            vector<int>ans(n , 0);
            for(i;i<n;i++)
            {
                ans[i] = one++;
            }
            for(j;j>=0;j--)
            ans[j] = one++;

            for(int k = 0;k<n;k++)
            cout<<ans[k]<<' ';
            cout<<endl;
        }
        else 
        {
            int last = n;
            vector<int>ans(n , 0);
            for(int i = 0;i<n;i++)
            ans[i] = last--;
            for(int k = 0;k<n;k++)
            cout<<ans[k]<<' ';
            cout<<endl;
        }
}


int main() {
   
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        fun();    
    }
	return 0;
}