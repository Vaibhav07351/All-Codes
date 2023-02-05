#include <bits/stdc++.h>
using namespace std;

void getAlphabet()
{
    string s;
    cin>>s;

    char ch=s[0];
    int flag=0;

    for(int j=0;j<s.length();ch++,j++)
    {

        if(ch=='{')
        {
            ch='a';
        }

        if(s[j]!=ch)
        {
            cout<<ch<<endl;
            flag=1;
            break;
        }


    }

    if(flag==0)
    {
        if(ch=='{')
        ch='a';
        cout<<ch<<endl;
    }

}

int main() 
{
    
    getAlphabet();

    return 0;
}
