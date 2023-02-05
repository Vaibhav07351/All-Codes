#include <bits/stdc++.h>
using namespace std;
#define int long long int

int PartitioningProcedure(int A[], int i, int j)
{

    int pivot = A[i];
    i++;
    j--;
    while (i <= j)
    {
        while (A[i] <= pivot && i<=j)
            i++;
        while (A[j] > pivot && i<=j )
            j--;

		if(i<=j)
		{
	//		cout<<"i="<<i<<" j= "<<j<<endl;
	        swap(A[i], A[j]);
    	}
    }

    swap(A[0], A[j]);
    return j;
}

void QuickSort(int A[], int i, int n)
{

    int j = PartitioningProcedure(A, i, n);
    QuickSort(A, 0, j);
    QuickSort(A, j + 1, n);

    for (int k = 0; k < n; k++)
        cout << A[k] << " ";
    cout << endl;
}

signed main()
{
    int A[10] = {50, 70, 60, 90, 40, 80, 10, 20, 30, 325667};
    int n = 10;
    PartitioningProcedure(A, 0, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}

