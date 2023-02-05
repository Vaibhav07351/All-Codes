#include<bits/stdc++.h>
using namespace std;
#define int long long int

void f(int index ,int arr[], vector<int > &arrt,int n,int sum,int s)
{
    if(index>=n)  //base condition
    {   
        if(s==sum)
        {
            for(int j=0;j<arrt.size();j++)
            cout<<arrt[j]<<" ";
            cout<<endl;
            
        }
        return;
    }

    arrt.push_back(arr[index]);
    s+=arr[index];

    f(index+1,arr,arrt,n,sum,s);

    arrt.pop_back();    
    s-=arr[index];

    f(index+1,arr,arrt,n,sum,s);    
    
}


signed main()
{
    system("cls");  

    int arr[]={1,2,3,4,5,6};
    int n=6;
    vector<int>arrt;

    int sum=3;
    f(0,arr,arrt,n,2,0);
    



    return 0;
}