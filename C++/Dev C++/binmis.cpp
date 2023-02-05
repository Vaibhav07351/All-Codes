#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() 
{
	int t,n,val;
	string s;
	vector<int >arr;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{   
	    s.clear();
	    arr.clear();
	    cin>>n;
	    cin.ignore();
	    cin>>s;

	    int Czero=0,Cone=0;
	    string mainsubsZ,mainsubsO;
	    
	    for(int j=0;j<n;j++)
	    mainsubsZ.append("0");
	    for(int j=0;j<n;j++)
	    mainsubsO.append("1");
	    
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='0')
	        Czero++;
	        else
	        Cone++;
	    }
	    
	    if(n%2==1)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    if(Czero==Cone)
	    cout<<"YES"<<endl<<1<<" "<<n<<endl;
	    
	    if(Czero>Cone)
	    {
	        int need=(n/2)-Cone;
	     //   cout<<"Need="<<need<<endl;
	        string subs=mainsubsZ.substr(0,need);
          //  cout<<"Subs="<<subs<<endl;
	        int j=0;
	        for(j=0;j<n;j++)
	        {   
               // cout<<"j= "<<j<<" "<<j+need<<" subs selected="<<s.substr(j,need)<<endl;
	            if(s.substr(j,need)==subs)
	            break;
	        }
	        
	        cout<<"YES"<<endl<<j+1<<" "<<j+1+need-1<<endl; 
	        
	    }
	    


        if(Czero<Cone)
	    {
	        int need=(n/2)-Czero;
	        //   cout<<"Need="<<need<<endl;
	        string subs=mainsubsO.substr(0,need);
            //  cout<<"Subs="<<subs<<endl;
	        int j=0;
	        for(j=0;j<n;j++)
	        {
                // cout<<"j= "<<j<<" "<<j+need<<" subs selected="<<s.substr(j,need)<<endl;
	            if(s.substr(j,need)==subs)
	            break;
	        }
	        
	        cout<<"YES"<<endl<<j+1<<" "<<j+1+need-1<<endl; 
	        
	    }
	    
	    
	}
	
	
	return 0;
}
