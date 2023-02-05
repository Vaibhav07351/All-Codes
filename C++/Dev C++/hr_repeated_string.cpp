#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int n,val,count=0;
    string str;
    vector<char > s;

    getline(cin,str);
     
    cin>>n;
    
    for(int i=0;i<str.length();i++)
    {
        s.push_back(str[i]);
    }
    
    for(int i=str.length(),j=0;i<n;i++,j++)
    {
        if(j==str.length())
        j=0;
        
        s.push_back(str[j]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        count++;   
    }
    
    cout<<count;
    
    return 0;
}

