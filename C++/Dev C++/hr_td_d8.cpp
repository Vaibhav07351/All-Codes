#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define int long long int


signed main()
{
    
    int n,flag=0;
    vector<string > s;
    vector<vector<string > > arr;
    string s1,s2;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++)
    {   
        s.clear();
        s1.clear();
        s2.clear();
        cin>>s1;
        cin>>s2;
        s.push_back(s1);
        s.push_back(s2);
        
        arr.push_back(s);
        
    }
    
    
//    for(int i=0;i<arr.size();i++)
//    {
//    	cout<<arr[i][1]<<endl;
//	}
    
    
    for(int i=0;i<100000;i++)
    {   
        s1.clear();
        cin>>s1;
        
        if(s1.length()==0)
        return 0;
    
       
    }
    
    
    
    
    
    
    
   
    return 0;
}

