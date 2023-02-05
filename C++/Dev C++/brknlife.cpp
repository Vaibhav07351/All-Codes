#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main() 
{
    
    int t,Slen,Alen,val;
    string S,A,S1;
    vector<int> arr,arrOrg;

    cin>>t;
    
    for(int i=0;i<t;i++)
    {   
        cin>>Slen>>Alen;
        cin.ignore();
        cin>>S>>A;
        int k=0;
        for(int j=0;j<Slen && k<Alen;j++ )
        {
            if(S[j]=='?' && A[k]=='e')
            S[j]='d';
            
            if(S[j]=='?' && A[k]!='e')
            S[j]='e';
            
            if(S[j]==A[k])
            k++;
        }
        
        if(k==Alen)
        cout<<-1<<endl;
        
        else
        cout<<S<<endl;
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
	return 0;
}
