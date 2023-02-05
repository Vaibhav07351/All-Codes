#include <bits/stdc++.h>
using namespace std;

void getCount()
{
    string s;
    cin>>s;
    int index=1,ans=0;
    for(int j=0;j<s.length();j++)
    {   
        if(s[j]=='-')
        {
            index++;
            continue;
        }

        int count=0;

        while(s[j]!='-' && j<s.length())
        {
            count++;
            j++;
        }

        if(s[j]=='-')
        j--;
        
        if(count==index)
        ans++;

    }

    cout<<ans<<endl;

}

int main() 
{
   
    getCount();
  
    return 0;
}

