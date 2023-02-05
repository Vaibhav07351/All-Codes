#include <bits/stdc++.h>
using namespace std;
#define int long long int

int PartitioningProcedure(int A[], int i, int j)
{
    int lower = i;
    int pivot = A[i];

    do
    {
        do{i++;}
        while (A[i] <= pivot );         //finds element greater than pivot on LHS,if found then send it back and bring smaller on LHS
        do{j--;}    
        while (A[j] > pivot );          //finds element smaller than pivot on RHS,if found then send it back and bring Larger on RHS
    

        if (i < j)
        {
            //	cout<<"i="<<i<<" j= "<<j<<endl;
            swap(A[i], A[j]);
        }
    }while(i<j);

    swap(A[lower], A[j]);

    // for(int k=0;k<5;k++)
    // cout<<A[k]<<" ";
    // cout<<endl;

    return j;
}

void QuickSort(int A[], int l, int h)
{
    int p;
    if (l < h)
    {
        p = PartitioningProcedure(A, l, h);
        QuickSort(A, l, p);
        QuickSort(A, p + 1, h);
    }
}

signed main()
{
    int n = 9;
    int A[n] = {8,7,6,5,4,3,2,1,32567};
    
    QuickSort(A, 0, n-1);   //n-1 sent and index in array 0 to 14

    for (int i = 0; i < n - 1; i++)
        cout << A[i] << " ";

    return 0;
}
