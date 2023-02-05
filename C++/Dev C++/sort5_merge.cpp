#include <bits/stdc++.h>
using namespace std;
#define int long long int


void Merge(int A[], int l,int mid, int h)   //Only merges 2 ALREADY SORTED LISTS or 1 list having 2 sorted lists in it
{
     int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}

void MergeSort(int A[], int n)
{
   int p, l, h, mid, i;
    for (p = 2; p <= n; p = p * 2)
    {   
        cout<<endl;
        for (i = 0; i + p - 1 <= n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);

            cout<<"l="<<l<<" h="<<h<<endl;            
            for(int j=0;j<n;j++)
            cout<<A[j]<<" ";
            cout<<endl;
        }
    }
    if (p / 2 < n)
        Merge(A, 0, p / 2 - 1, n);
}

signed main()
{   
    int n=11;
    int A[] = {6,4,3,2,1,5,10,9,8,7,0};

       MergeSort(A,n);
    
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout<<endl<<endl;
    return 0;
}
