#include <bits/stdc++.h>

using namespace std;

int main()
{
    int val,h,maxh,letterno;
    string s;
    vector<int > arr;
    
    for(int i=0;i<5;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
	
	cin.ignore();
    getline(cin,s);
    
    maxh=arr[s[0]-'a'];
    cout<<maxh;
    
    for(int i=0;i<s.length();i++)
    {
        letterno=s[i]-'a';
        
            if(arr[letterno]>maxh)
            maxh=arr[letterno];
        
        
    }
    
    cout<<maxh*s.length();
    
    
    
    
    
    
    return 0;
}
