#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int n,flag=0,count=0,flag2=0,k;
    string s;
    vector<string > arr;
    
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++)
    {
        s.clear();
        getline(cin,s);
        arr.push_back(s);
    }
    
    for(int i=0;i<arr[0].length();i++)
    {   
        cout<<i<<" "<<arr[0][i]<<endl;
        flag2=0;
        flag=0;
        k=i-1;
        for(k ; k>=0 ;k--)
        {
            if(i==0)
            break;
            
            if(arr[0][i]==arr[0][k])
            {	cout<<"k= "<<k<<arr[0][i]<<" "<<arr[0][k]<<endl;
                flag2=1;
                break;
            }
        }
        
        cout<<"flag2= "<<flag2<<endl;
        
        if(flag2==0)
        {
                for(int j=1;j<n;j++)
                {
                    if(arr[j].find(arr[0][i])== (string::npos) )
                    {
                      cout<<"nf"<<endl;
                        flag=1;
                        break;
                    }
                
                }
                
                if(flag==0)
                count++;
        }       
        cout<<"count="<<count<<endl<<endl;
    }
    
    cout<<count;
    

    
    
    
    
    
    return 0;
}

