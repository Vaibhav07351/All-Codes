#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    
    int n,res,diff,flag=0;
    cin>>n;
    vector<int >arr1,arr2;
    string s;
    string rev;
    string org;
    cin.ignore();
    for(int i=0;i<n;i++)
    {	
    	arr1.clear();
    	arr2.clear();
    	flag=0;
        getline(cin,s);   
        org=s;
        reverse(s.begin(),s.end());
        
        for(int j=1;j<s.length();j++)
        {
            arr1.push_back(abs(s[j]-s[j-1]));
            arr2.push_back(abs(org[j]-org[j-1]));
        }
       
        for(int j=0;j<arr1.size();j++)
        {	
        //	cout<<"a"<<arr1[j]<<" "<<arr2[j]<<endl;
          if(arr1[j]!=arr2[j])
          {
              cout<<"Not Funny"<<endl;
              flag=1;
              break;
          }
        }
        
//        for(int k=0;k<arr1.size();k++)
//        {
//        	cout<<arr1[k]<<" ";
//        	
//		}
//		cout<<endl;
//       for(int k=0;k<arr2.size();k++)
//        {
//        	cout<<arr2[k]<<" ";
//        	
//		}
//       cout<<endl;
        if(flag==0)
        cout<<"Funny"<<endl;
       
       
       
       
    }
    
    
    
    
    return 0;
}

