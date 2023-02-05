#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int g,n,space=0,flag=0;
    string s;
    cin>>g;
    cin.ignore();
    for(int i=0;i<g;i++)
    {   
    	flag=0;
    	s.clear();
        space=0;
        cin>>n;
        cin.ignore();
        getline(cin,s);
        
        for(int k=0;k<s.length();k++)
        {	
        	if(s[k]=='_')
        	space++;
		}
        
        if(space>0)
        sort(s.begin(),s.end());
        
   //     cout<<s<<endl;
        for(int j=0;j<s.length();j++)
        {
           	if(j==0 && (s[j+1]!=s[j]) && s[j]!='_')
			{
				flag=1;
			//	cout<<"1 "<<j<<endl;
				break;	
			}    
 			          
            if( ((s[j]!=s[j-1] ) && (s[j]!=s[j+1]) ) && (j!=(s.length()-1) ) && (j!=0) && s[j]!='_')
            {
            	flag=1;
            //	cout<<"2 "<<j<<endl;
            	break;
			}
			if( j==(s.length()-1) && s[j]!=s[j-1] && (j!=0) && s[j]!='_')
            {
            	flag=1;
            //	cout<<"3 "<<j<<endl;
            	break;
			}
			
            
        }
        
        
        if(flag==0)
        {
        	cout<<"YES"<<endl;
        	
		}
        
        else
        cout<<"NO"<<endl;
        
    }
    

    
    
    
    return 0 ;
}
