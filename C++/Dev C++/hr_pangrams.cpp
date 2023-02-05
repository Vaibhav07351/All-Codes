#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int flag=0,count=0;
    string s;
    vector<char> arr;

    getline(cin,s);
    
    for(char i='A'; i<='Z';i++)
    {
        arr.push_back(i);
    }
    
    for(char i='a'; i<='z';i++)
    {
        arr.push_back(i);
    }
    
    for(int i=0;i<27;i++)
    {
        flag=0;
        for(int j=0;j<s.size();j++)     
        {
            if( arr[i] == s[j] || arr[i+26] == s[j] )
            {
                count++;
                break;
            }
        }  
        
        
        
    }
    
    if(count==27)
    cout<<"pangram";
    else
    cout<<"not pangram";
    
    
    
    
    
    
    return 0;
}

