#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int t=0,n=0,c=0,m=0,bought=0,echoc=0,left=0,again=0;
    unsigned long long int  arr[10000];
    
    cin>>t;
    
    for(unsigned long long int i=0;i<t;i++)
    {   
        n=0,c=0,m=0,bought=0,echoc=0,left=0,again=0;
        
        cin>>n;
        cin>>c;
        cin>>m;
        
        bought=n/c;
        
        echoc=bought/m;
        if(bought>m)
        left=bought%m;
        again=echoc + (echoc+left)/m;
        left=echoc%m;
        echoc/=m;
        while(echoc!=0)
        {
		//	cout<<"bought = "<<bought<<"  echoc = "<<echoc<<"  left = "<<left<<"  again = "<<again<<endl;
        	left+=echoc%m;
        	echoc/=m;
        	  
        	  	again+=echoc;
        	 // 	cout<<"bought = "<<bought<<"  echoc = "<<echoc<<"  left = "<<left<<"  again = "<<again<<endl;
    	}
      
        again+=left/m;
        arr[i]=(bought+again);
        
        cout<<arr[i]<<endl;
    }
    
   // cout<<arr[636]<<"  "<<arr[637]<<"  "<<arr[638]<<"   "<<arr[639]<<endl;
    
  //  for(int64_t i=0;i<t;i++)
  //  cout<<arr[i]<<endl;
    
    return 0;
}

