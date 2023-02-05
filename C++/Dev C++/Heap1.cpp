#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Heap
{
	public:
	int size=7;
	
	void InsertMax(int A[],int n);
	void InsertMin(int A[],int n);
	void CreateMaxHeap(int A[],int n);	
	void CreateMinHeap(int A[],int n);	
	void Delete(int A[],int n);
	void Display(int A[],int n);	
	void Heapify(int A[],int n);
};


void Heap:: InsertMax(int A[],int n)
{
	int i=n;
	int temp=A[n];
	while(i>=1  && (temp > A[ (i-1)/2 ]) )
	{
		A[i]=A[ (i-1)/2  ];	
		
		i=(i-1)/2;
	}
	
	A[i]=temp;
	
}


void Heap::InsertMin(int A[],int n)
{
	int i=n;
	int temp=A[n];
	while(i>=1  && (temp < A[ (i-1)/2 ]) )
	{
		A[i]=A[ (i-1)/2  ];	
		
		i=(i-1)/2;
	}
	
	A[i]=temp;
	
}

void  Heap::CreateMaxHeap(int A[],int n)
{
	for(int i=1;i<n;i++)
	{
		InsertMax(A,i);
	}
	
	
}


void Heap::CreateMinHeap(int A[],int n)
{
	for(int i=1;i<n;i++)
	{
		InsertMin(A,i);
	}
	
	
}
	

void Heap:: Delete(int A[],int n)
{
	if(size==0)
	return;
	
	n=n-1;
	int x=A[n];	
	int y=A[0];
	int i=0;
	int j=2*i+1;
	
	A[i]=x;
		
	while(j < n)
	{
		if( A[j+1]>A[j] )
		{
			j=j+1;
		}
		if(A[j] > A[i])
		{
			int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i=j;
			j=2*i+1;
		}
		
		else
		break;

	}
	
	A[n]=y;
	
	size-=1;
	
}



void Heap:: Display(int A[],int n)
{
	
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}


void Heap::Heapify(int A[],int i)
{

	int j;
	int temp;

	
	if(i<0)
	return;
	
	if(i>=0)
	{
		j=2*i+1;
		if(j<size)
		{
			if( A[j+1]>A[j] )
			{
				j=j+1;
			}
			
			if(A[j]>A[i])
			{	
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;	
				
				Heapify(A,j);
			}
			

		}
	}
	
	Heapify(A,i-1);


}




signed main()
{
	Heap heap;	
	int A[heap.size]={5,10,30,20,35,40,15};
	heap.Heapify(A,6);
//	heap.CreateMaxHeap(A,heap.size);
//	heap.Delete(A,heap.size);	
//	heap.Delete(A,heap.size);
//	heap.Delete(A,heap.size);
//	heap.Delete(A,heap.size);
//	heap.Delete(A,heap.size);
//	heap.Delete(A,heap.size);
//	heap.Delete(A,heap.size);

	heap.Display(A,7);


	return 0;
}

