#include <bits/stdc++.h>
using namespace std;
#define int long long int

void InsertionSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = A[i];
        while (j >= 0 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = x;
    }
}

signed main()
{
    int A[7] = {6, 10, 8, 14, 12, 20, 18};
    int n=7;
    InsertionSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
