#include<bits/stdc++.h>
 
using namespace std;
 
 
int getMax(vector<vector<int>>&grid,int i,int j,int n,vector<vector<int>>&dp){
 
    if(i>=n || j>=n)return 0;
 
    if(dp[i][j] != -1)return dp[i][j];
   
    return dp[i][j] = max(  getMax(grid,i+1,j,n,dp)+grid[i][j], getMax(grid,i,j+1,n,dp)+grid[i][j] );
}
 
// int maxCollect(vector<vector<int>>&grid){
 
    
// }
 
int main()
{
    system("cls");
    int n,val;
    cin>>n;

    vector<vector<int>>v;
    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        arr.clear();
        for(int j=0;j<n;j++)
        {
            cin>>val;
            arr.push_back(val);
        }
        v.push_back(arr);
    }
    
    int n2=n;
    vector<vector<int>>dp(n2,vector<int>(n2,-1));
    cout<< getMax(v,0,0,n2,dp);

    
    return 0;
}
