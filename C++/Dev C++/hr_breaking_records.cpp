#include <bits/stdc++.h>

using namespace std;

 int main()
 {
     int n,val,min,max,countA=0,countB=0;
     vector<int > arr;
     
     for(int i=0;i<n;i++)
     {
         cin>>val;
         arr.push_back(val);
     }
     
     min=arr[0];
     max=arr[0];
     
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
             countA++;
         }
         
         
         if(arr[i]<min)
         {
             min=arr[i];
             countB++;
         }
         
     }
     
     cout<<countA<<" "<<countB;
     
     return 0;
 }

