#include <bits/stdc++.h>
using namespace std;
#define int long long int

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n-1 ; i++)        //start from position 0 and selection smallest elemnent for that posn and swap with it
    {
        int j = i, k = i;

        while (j < n)            //k on smallest element and j at last after each pass
        {
            if (A[j] < A[k])      
                k = j;

            j++;
        }

        swap(A[i], A[k]);               //swap current posn with smallest element found for that posn
    }
}

signed main()
{
    int A[7] = {6, 10, 8, 14, 12, 20, 18};
    int n = 7;
    SelectionSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
