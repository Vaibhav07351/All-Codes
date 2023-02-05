#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<int> arr1(26,0),arr2(26,0);
    
    int count=0;
    
    for(int i=0;i<s1.length();i++)
    {
        arr1[s1[i]-'a']++;
    }
    
    for(int i=0;i<s2.length();i++)
    {
        arr2[s2[i]-'a']++;
    }
//    	char k='a';
//        for(int i=0;i<26;i++)
//        {
//			cout<<k<<"= "<<arr1[i]<<" ";
//			if(i%5==0)
//			cout<<endl;
//			k++;
//	    }
//
//cout<<endl<<endl;
//	 k='a';
//        for(int i=0;i<26;i++)
//        {
//			cout<<k<<"= "<<arr2[i]<<" ";
//			if(i%5==0)
//			cout<<endl;
//			k++;
//	    }


   // if(s2.length()>=s1.length())
    {
        
        for(int i=0;i<26;i++)
        {
            if(arr2[i]>arr1[i])    
            {   
                while(arr2[i]>arr1[i])
                {
                    arr2[i]--;
                    count++;
                }
            }
              
                if(arr2[i]<arr1[i])    
            {   
                while(arr2[i]<arr1[i])
                {
                    arr1[i]--;
                    count++;
                }
                
            }
            
            
        }
                
    }
    
    
    // if(s2.length()<s1.length())
    // {
        
    //     for(int i=0;i<26;i++)
    //     {
    //         if(arr1[i]>arr2[i])    
    //         {
    //             arr1[i]--;
    //             count++;
    //         }
    //     }
                
    // }
    
    cout<<count;
    
    
    return 0;
}

