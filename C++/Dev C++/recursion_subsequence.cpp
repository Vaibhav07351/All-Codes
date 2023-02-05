#include<bits/stdc++.h>
using namespace std;
#define int long long int

void f(int index ,int arr[], vector<int > &arrt,int n)
{
    if(index>=n)  //base condition
    {
        if(arrt.size()==0)
        {
            cout<<"{}"<<endl;
            return;
        }

        for(int j=0;j<arrt.size();j++)
        cout<<arrt[j]<<" ";
        cout<<endl;
        return;

        
    }

    arrt.push_back(arr[index]);

    f(index+1,arr,arrt,n);

    arrt.pop_back();    

    f(index+1,arr,arrt,n);    
    
}


signed main()
{
    system("cls");  

    int arr[]={1,2,3,4,5,6};
    int n=6;
    vector<int>arrt;


    f(0,arr,arrt,n);
    



    return 0;
}