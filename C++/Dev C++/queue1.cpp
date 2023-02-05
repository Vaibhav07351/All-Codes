#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Queue
{
	private:
//	int data;	
	int size;
	int front;
	int rear;
	int *Q;
	
	public:
	
	Queue()
	{
		front=-1;
		rear=-1;
		size=5;
		Q=new int[size];
	}
	
	
	Queue(int x)
	{
		front=-1;
		rear=-1;
		size=x;
		Q=new int[x];
	}
	
	
	void Enqueue(int x);
	int Dequeue();
	void Display();
	int Count();
	int isEmpty();
	int isFull();
	
};

int Queue::Count()
{
	
	if(front==-1 && rear==-1)
	return 0;
	
	else
	{
		int c=0;
		int temp=front;
		while(temp<=rear)
		{
			c++;
			temp++;
			
		}
		
		return c;
	}
	
	
}


void Queue::Enqueue(int x)
{
	
	if(rear==size-1)
	{	
		cout<<endl<<"Queue FULL!"<<endl;
		return;
	}
	
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		Q[rear]=x;
	}
	else
	{
		
		rear++;
		Q[rear]=x;
		
	}
	
		
}


int Queue::Dequeue()
{
	
	if(front==-1 && rear==-1)
	{
		cout<<endl<<"Queue Empty!!"<<endl;
		return -1;
	}
	
	else
	{
		
		if(front==rear)
		{
			int x=Q[front];
			front=rear=-1;
			return x;
		}
		else
		{
			int x;
			x= Q[front];
			
			front++;
			
			return x;	
		}
		
		
	}
	
	
}

void Queue::Display()
{
	
	if(front==-1 && rear==-1)
	{
		cout<<endl<<"Queue empty!!"<<endl;
		return;
	}
	
	else
	{
		int temp=front;
		
		while(temp<=rear)
		{
			cout<<Q[temp]<<" ";
			temp++;
			
		}
		
	}
	
	
}



int Queue::isEmpty()
{
	
	if(front==-1 && rear==-1)
	return 1;
	else 
	return 0;
	
}


int Queue::isFull()
{
	
	if(rear==size-1)
	return 1;
	else 
	return 0;
	
}


signed main()
{
	Queue q;
	
	cout<<q.isEmpty()<<endl;
	cout<<q.isFull()<<endl;
	q.Enqueue(5);
	q.Enqueue(6);
	q.Enqueue(7);
//	q.Enqueue(8);
//	q.Enqueue(9);
//	cout<<q.Count();
//	cout<<endl;
//	cout<<q.isFull()<<endl;
//	cout<<q.isEmpty()<<endl<<endl;
	q.Display();

	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
////	q.Dequeue();
	cout<<endl<<q.Count();
	cout<<endl;
	q.Display();




	return 0;
}

