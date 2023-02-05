#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int q,a,count=0,k,num=0,flag=0;
    vector<int >arr;
    string s;
    cin>>q;
    cin.ignore();
    for(int i=0;i<q;i++)
    {
        arr.clear();
        s.clear();
        cin>>s;
        count=0;
        flag=0;
        
        for(int j=0;j<s.length();j++)
        {   
        	count=0;
        	num=0;
        //	flag=0;
        //	cout<<"j= "<<j<<endl<<endl;
            if(s[j+1]=='0' )
            {	
            	k=j;
                while(s[k+1]=='0')
                {	 
                    count++;
                    k++;
                }        
               	
		//		cout<<"sj = "<<s[j]<<" count= "<<count<<" pow val = "<< pow(10,count)<<endl;    
                arr.push_back( ( (s[j]-'0') * pow(10,count) )  );
          //      cout<<" valpushed="<<s[j]-'0' <<"   "<<pow(10,count)<<endl;
                j+=count;
                flag=1;
                continue;
            }
            
            if(s[j+1]!='0' && j!=(s.length()-1) && flag==1)
            {	
            	count=0;
            	num=0;
            	cout<<"here"<<endl;
            	k=j;
            	while(s[k+1]!='0' && k!=s.length())
            	{	
            		cout<<" k= "<<k<<endl;
            		num=num*10+ (s[k]-'0') ;
            		count++;
            		k++;
				}
            	
            	arr.push_back(num);
            	j+=count;
            	j-=1;
            	continue;
			}
            
            if(s[j+1]!='0' && j!=(s.length()-1))
            arr.push_back(s[j]-'0');
            
            if(s[j]!='0' && j==(s.length()-1))
            arr.push_back(s[j]-'0');
            
        }
        
        for(int i=0;i<arr.size();i++)
    	cout<<arr[i]<<" ";
    
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}
