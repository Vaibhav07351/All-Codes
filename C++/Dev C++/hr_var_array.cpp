#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits\stdc++.h>
using namespace std;


int main() 
{
      
      int n,q,k,val,a,b;
      vector<int> arr;
      vector<vector<int> >arr2;
      cin>>n>>q;
      
      for(int i=0;i<n;i++)
      {	
      		arr.clear();
          cin>>k;
          
          for(int j=0;j<k;j++)
          {
              cin>>val;
              arr.push_back(val);
       
          }
          
          arr2.push_back(arr);
          
      }
    
    for(int i=0;i<2;i++)
    {
    	for (int j=0;j<5;j++)
    	{
    		cout<<arr2[i][j]<<"  ";
    		
		}
		cout<<endl;
	}
    
    
      
      for(int i=0;i<q;i++)
      {
          cin>>a>>b;
          
          cout<<arr2[a][b]<<endl;
          
      }
      
      
      
      
    return 0;
}
