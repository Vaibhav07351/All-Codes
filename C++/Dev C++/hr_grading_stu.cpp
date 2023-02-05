#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k=5,val;
    vector<int> grade;
    
    cin>>n;
           
    for(int i=0;i<n;i++)
    {   cin>>val;
        grade.push_back(val);
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(grade[i]<38)
        continue;
        
        for(k=5;k<grade[i];k+=5)
        {}
        
        cout<<endl<<k<<endl;
        
        if( ( (k) - grade[i] ) <=2  )
        grade[i]=k+5;
         
    }
    
    for(int j=0;j<n;j++)
    cout<<grade[j]<<endl;
    
    
    
    
    return 0;
}
