#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    unsigned long long int n,val,count=0,flag=0;
    vector<int > arr;
    
    cin>>n;
    
    for(unsigned long long int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    for(unsigned long long int i=0;i<n;i++)
    {
        
        for(unsigned long long int j=0;j<n;j++)
        {
            if(arr[j]%2==1)    
            {
                arr[j]+=1;
                count++;
                
                if(arr[j+1]%2==1)
                {
                    arr[j+1]+=1;
                    count++;
                    break;
                }
                
                if(arr[j-1]%2==1 && j!=0)
                {
                    arr[j-1]+=1;
                    count++;
                    break;
                }
                
                else 
                {
					arr[j+1]+=1;
					count++;
					
					if(j+1>=n)
					{	
						flag=1;
					}
					break;
            	}
            }
            
        }
           
//		for(int i=0;i<n;i++)
//		cout<<arr[i]<<" ";   
//		
//		cout<<endl;    
    }
	
	if(flag==0)    
    cout<<count;
    
    if(flag==1)
    cout<<"NO";
    
    return 0;
}

