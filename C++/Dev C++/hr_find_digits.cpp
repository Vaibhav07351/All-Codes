#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_case,val,divisor,temp,count=0,flag=0,count2=0;
    vector<int> arr,arr2;
    
    cin>>no_of_case;
    
    for(int i=0;i<no_of_case;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    
    for(int i=0;i<no_of_case;i++)
    {	
    	count=0;
    	flag=0;
    	count2=0;
    	temp=arr[i];
    //	cout<<"check1";
    	
    	while(temp>0)
    	{
    		//cout<<"check2";	
    	//	cout<<"temp="<<temp<<endl;	
    		divisor=temp%10;
    		if(divisor==0)
    		{
    			temp/=10;
    			continue;
			}
    		
    		if((arr[i]%divisor)==0)
    		{
    			arr2.push_back(divisor);
    			count++;
			}
    	
    	
    		temp/=10;
    		//	cout<<"temp="<<temp<<endl;
    		
		}
    	
    	
    	
    	for(int k=0;k<count;k++)
    	{
    		for(int l=0;l<count;l++)
    		{
    			if(arr2[k]==arr[l])
    			flag=1;
			}
			
			if(flag==0)
			{
				count2++;	
			}
		}
    	
			    
    	
    	cout<<count2<<endl;
    //	cout<<"check3";
    	
    	
	}

    
    return 0;
}
