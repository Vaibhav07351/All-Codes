#include <bits/stdc++.h>
using namespace std;
//#define int long long int

void CountSort(int A[], int n)
{
    int max;
    max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }

    int B[max+1]={0}; 

    for(int i=0;i<n;i++)
    {
        B[A[i]]++;
    }

    int k=0;
    for(int i=0;i<max+1;i++)    
    {
        while(B[i]!=0)
        {
            A[k++]=i;
            B[i]--;
        }
    }
}

signed main()
{
    int n=8;
    int A[8] = {10,100,20,4,2,1,5,100};
    
    CountSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
