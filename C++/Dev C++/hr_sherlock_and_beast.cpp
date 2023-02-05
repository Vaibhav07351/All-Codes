#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int t,n,nfive=0,nthree=0;
    vector<int> arr;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {   
        nfive=0,nthree=0;
        cin>>n;
        arr.clear();
        
        if(n<3)
        {
            cout<<-1<<endl;
            continue;
        }
        
        for(nfive=0;nfive<n;nfive+=3)
        {}
        
        if(nfive!=n)
        nfive-=3;
		    
        for(;nfive>=0;nfive-=3)
        {
      // 	cout<<"here"<<nfive<<endl;
            if( (n-nfive)%5==0) 
            break;
        }    
        
        if(nfive<0)
        nfive=0;
        
        for(int j=0;j<nfive;j++)
        arr.push_back(5);
        
    //    cout<<"nf="<<nfive<<" nthree= "<<n-nfive<<endl;
        
        if(nfive==0 &&  (n-nfive)%5!=0 )
        {
            cout<<-1<<endl;
            continue;
        }
        
        for(int j=0;j<(n-nfive);j++)
        arr.push_back(3);
        
        for(int j=0;j<arr.size();j++)
        cout<<arr[j];
        
        cout<<endl;
    }
    
    
    
    
    
    
    
    return 0;
}

