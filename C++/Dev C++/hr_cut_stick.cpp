#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,val,count,min,max,countA=0;
    vector<int > arr;
    
    cin>>n;
    
  
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    min=arr[0];
    max=arr[0];
    
    count=n;  
    
//        for(int j=0;j<n;j++)
//        {
//            if(arr[j]>max && arr[j]!=0)
//            max=arr[j];
//        }
//        
//        count=max;
//    
    for(int i=0;count>0;i++)
    {   
        countA=0;
        
        
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=0)
            {min=arr[j];
            break;
			}
        }
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]<min && arr[j]!=0)
            min=arr[j];
        }
        
        
        for(int j=0;j<n;j++)
        {
        	if(arr[j]!=0)
            {arr[j]-=min;
			}
            
            if(arr[j]==0)
            countA++;
        }
        
//		   for(int j=0;j<n;j++)
//        {
//        	cout<<arr[j]<<"  ";
//        }
       // cout<<endl;
        
        cout<<count<<endl;
        count=n;
        count=count-countA;
    }
    
    
    
    
    
    
    return 0;
}
