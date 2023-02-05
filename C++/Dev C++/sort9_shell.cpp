#include <bits/stdc++.h>
using namespace std;
//#define int long long int

void InsertionSort(int A[], int n,int gap)
{

    for (int i = 0+gap; i < n; i++)
    {
        int j = i - gap;
        int x = A[i];
        while (j >= 0 && A[j] > x)
        {
            A[j + gap] = A[j];
            j-=gap;
        }

        A[j + gap] = x;
    }
}

void ShellSort(int A[],int n)
{
    int gap=n/2;
    while(gap>0)
    {
        InsertionSort(A,n,gap);
        gap/=2;
    }


}


signed main()
{
    int A[11] ={9,5,16,8,13,6,12,10,4,2,3};
    int n=11;
    ShellSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}