#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int no_of_case,val,cycle,height;
    vector<int> cycle_num;
    
    cin>>no_of_case;
    
    for(int i=0;i<no_of_case;i++)
    {
        cin>>val;
        cycle_num.push_back(val);
    }
    
    
    for(int i=0;i<no_of_case;i++)
    {
    	height=1;
		cycle=cycle_num[i];
    	
    	
    	for(int j=1;j<=cycle;j++)
    	{
    		if(j%2==1)
    		height*=2;
    		
    		else
    		height+=1;
    		
		}
    	
    	cout<<height<<endl;
    	
    	
    	
	}
    
    
    
    
    
    
    return 0;
}

