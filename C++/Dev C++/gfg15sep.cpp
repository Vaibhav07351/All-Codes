//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N)
    {
        int tsum=0;
        for(int j=0;j<N;j++)
        tsum+=Arr[j];
        
        sort(Arr.begin(),Arr.end());
        reverse(Arr.begin(),Arr.end());
        int cs=0,rs=tsum,count=0;
        for(int j=0;j<N;j++)
        {            
            rs-=Arr[j];
            cs+=Arr[j];

            if(cs<=rs)
            count++;
            else
            break;
        }
        
        return count+1;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends