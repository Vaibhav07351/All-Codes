#include <bits/stdc++.h>
using namespace std;
#define int long long int

void BubbleSort(int A[], int n)
{

    for (int i = 0; i < n - 1; i++) // n-1 number of passes
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) // in each pass one comparison reduces
        {
            if (A[j] > A[j + 1])
            {
                flag = 1;
                swap(A[j], A[j + 1]);
            }
        }

        if (flag == 0) // Adaptive :-> if already sorted list passed then stops after 1 pass when sees no swap is done in whole 1 pass
            break;     // means given list is already sorted
    }
}

signed main()
{
    int n=5;
    int A[5] = {8, 5, 7, 3, 2};

    BubbleSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
