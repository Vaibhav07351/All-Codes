#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,valA,valB,maxA,minB,count=0,flag=0,flag1=0;
    vector<int> arr1,arr2,arr1_sort,arr2_sort;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        cin>>valA;
        arr1.push_back(valA);
    }
       
    for(int i=0;i<m;i++)
    {
        cin>>valB;
        arr2.push_back(valB);
    }
    
    maxA=arr1[0];
    minB=arr2[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>=maxA)
        maxA=arr1[i];
    }
    
    for(int i=0;i<m;i++)
    {
        if(arr2[i]<=minB)
        minB=arr2[i];
    }
    
    
    for(int i=maxA ;i<=minB ;i++)
    {	
    	flag=0;
    	
   		for(int j=0;j<n;j++)
		   {
		   		//flag=0;//
		   		if( i % arr1[j] !=0 )
		   		flag=1;
		   }     
		   
		  if(flag==0)  //potential i
		  {
		  	flag1=0;
		  		for(int k=0;k<m;k++)
		  		{
		  			
		  			
		  			if(arr2[k]%i !=0)
		  			flag1=1;
		  			
			    }
		  	
		  		if(flag1==0)
		  		{
				    cout<<i<<endl;
		  			count++;
		        }
		        
		        
		  } 
		  
		  
    }
    
    cout<<endl<<endl<<count;
    
    
    return 0;
}

