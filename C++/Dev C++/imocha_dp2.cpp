#include<iostream>
#include<vector>
 
using namespace std;
 
 
    int isValid(vector<int>&v,int i,int n,vector<int>&dp)
{
    if(i>=n-1)
        return 0;
    if(i==n-2)
    {
        if(v[n-2]-v[n-1]==1)
            return 1;
        else return 0;
    }
    if(i==n-3)
    {
        int a=v[n-3],b=v[n-2],c=v[n-1];
        if( (a-b)==(b-c) && (a-b)==1 )
        return 1;
        else return 0;
    }
 
    if(dp[i]!=-1)return dp[i];
    int t1=0,t2=0;
    int x=v[i],y=v[i+1];
    int a=v[i],b=v[i+1],c=v[i+2];
 
    if(y-x==1)t1=1;
    if( (a-b)==(b-c) && (a-b)==1 )
    t2=1;
 
    return dp[i]= ( t1 && isValid(v,i+2,n,dp) || t2 && isValid(v,i+3,n,dp) );
}
 
 
int main()
{
    system("cls");
    int n,val;
    vector<int>v;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>val;
        v.push_back(val);
    }

      n=v.size();
        if(n==2){
            if(v[1]-v[0]==1)return 1;
            return 0;
        }
        if(n==3){
            int a=v[0],b=v[1],c=v[2];
            if( (a-b)==(b-c) && (a-b)==1 )
            return 1;
            return 0;
        }
        vector<int>dp(n,-1);

        cout<<isValid(v,0,n,dp);
   
 
    return 0;
}
