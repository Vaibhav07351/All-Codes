#include <bits/stdc++.h>
using namespace std;

void getBalance()
{       
        int N,K;
        cin>>N>>K;
        int val,arr[N],firstsum=0,lastsum=0;

        for(int j=0;j<N;j++)
        {
            cin>>val;
            arr[j]=val;
        }
   
        for(int j=0;j<K;j++)
        {
            firstsum+=arr[j];
        }
        
        for(int j=N-1;j>=N-K;j--)
        {
            lastsum+=arr[j];
        }
        
        if(firstsum>lastsum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

}


int main() 
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
        getBalance();
	}
	
	return 0;
}
