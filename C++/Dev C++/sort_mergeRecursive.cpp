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

void RMergeSort(int A[], int l,int h)
{
  // int p, l, h, mid, i;
    
   if(l<h)
   {
       int mid=(l+h)/2;
       RMergeSort(A,l,mid);
       RMergeSort(A,mid+1,h);
       Merge(A,l,mid,h);
   }



}

signed main()
{   
    int n=11;
    int A[] = {6,4,3,2,1,5,10,9,8,7,0};

      RMergeSort(A,0,11);
    
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout<<endl<<endl;
    return 0;
}
