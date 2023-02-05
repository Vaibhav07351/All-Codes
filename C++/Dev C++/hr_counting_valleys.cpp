#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0,count=0,temp=0,countA=0;
    string s;

    cin>>n;
    cin.ignore();
    getline(cin,s);
    
    for(int i=0;i<s.length();i++)
    {   
        if(s[i]=='U')
        temp=1;
        else
        temp=-1;
        
        
        if(temp>0)
        countA++;   
        
        if(temp<0)
		countA--;
	
    	if(countA<0)
    	flag=1;
    	
    	if(countA>0)
    	flag=0;
        
        if(flag==1)
        {
	            if(countA>=0)
	            count++;
        }
        
        
        cout<<"countA = "<<countA<<"  count = "<<count<<endl;
        
    }
    
    cout<<count;

    return 0;
}

