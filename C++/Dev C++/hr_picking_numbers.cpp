#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n,val,count1=0,count2=0,max=2,flag=0,j=0,flag2=0;
    vector<int > arr;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    for(int i=0;i<n;i++)
    {
        flag=0;
        count1=0,count2=0;
        
      //  cout<<"check1"<<endl;
        for(j=0;j<n;j++)
        {
            if(abs(arr[j]-arr[i]) <= 1 )
            {
                flag=1;
                flag2=1;
                break;
            }
        }
    //    cout<<"check2"<<endl;    
        if(flag==1)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[k]==arr[i])
                count1++;
            }
            
      //      cout<<"check3"<<endl;
            if(arr[i]!=arr[j])
            {
				
	            for(int k=0;k<n;k++)
	            {
	                if(arr[k]==arr[j])
	                count2++;
	            }
        	}
        }
        
     //   cout<<"check4"<<endl;
        if(count1+count2>=max)
        max=count1+count2;
        
    }
   // cout<<flag2<<" " ;
   // cout<<"check5"<<endl;
    if(flag2==0 && max==2)
    cout<<0;
    else   
    cout<<max;
    
    
    
    
    return 0;
}
