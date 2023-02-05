#include<iostream>
#include<vector>
using namespace std;
 
int getIndexVal(int n,vector<int>&dp){
 
    if(n<=0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 3;
 
    if(dp[n]!=-1)return dp[n];
 
    return dp[n] = getIndexVal(n-1,dp) + getIndexVal(n-2,dp) + getIndexVal(n-3,dp) + getIndexVal(n-4,dp);
}
 
int main(){
 
 int t=12;
 while(t--)
 {
    int n=0;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<getIndexVal(n,dp);
    cout<<endl<<endl;
 }
}
