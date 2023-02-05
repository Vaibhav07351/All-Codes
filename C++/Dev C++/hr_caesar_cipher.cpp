#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,k,mul=1;
    string s;
    
    cin>>n;
    cin.ignore();
    
    cin>>s;
    cin>>k;
 
 	if(k>26)
 	mul=k/26;
 	for(int i=0;i<s.length();i++)
 	{
 		if(k%26==0)
 		break;
 		
 		
 		if(  ( (int)(s[i]) <65  ) || (  (int)(s[i]) >90 && (int)(s[i]) <97  )  || (  (int)(s[i]) >122  ) )
 		continue;
 		
 		if( ( (int)(s[i] ) <=90 ) && ( (int)(s[i] + k ) >90 )  )
 		{	
 			
 			k=k%26;
 			if( ( (int)(s[i]+k ) ) < 90 )
 			{	
 				s[i] =  (char)((int)s[i] + k);
 				continue;
			}
 			
			 s[i] = (char)( (int)(s[i]+k%26 -(90 )+ 64 ) );
			 continue;  
 		}
 		if( ( (int)(s[i] ) <=122 && ( (int)(s[i] ) >=97 ) ) && ( (int)(s[i] + k ) >122 )  )
 		{	
 			
 			k=k%26;
 			if( ( (int)(s[i]+k ) ) < 122 )
 			{	
 				s[i] =  (char)((int)s[i] + k);
 				continue;
			}
 		
 			cout<<k<<endl<<(int)(s[i]+(k%26)-122);
 			
			 s[i] = (char)( (int)(s[i]+(k%26)-122)+ 96  );
			 continue;  
 		}
 		else
 		s[i] =  (char)((int)s[i] + k);
 		
    }
 	
 	cout<<s;
 
 
    return 0;
}

