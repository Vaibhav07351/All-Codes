#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Queue
{
	private:
	int data;	
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
	
	
	void Enqueue_rear(int x);
	int Dequeue_front();
	void Enqueue_front(int x);
	int Dequeue_rear();
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


void Queue::Enqueue_rear(int x)
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

void Queue::Enqueue_front(int x)
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		Q[rear]=x;
	}

	if(front>0)
	{
		front--;
		Q[front]=x;
	}
	
}



int Queue::Dequeue_front()
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



int Queue::Dequeue_rear()
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
			x= Q[rear];
			
			rear--;
			
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
	
	q.Enqueue_rear(5);
	q.Enqueue_rear(6);
	q.Enqueue_rear(7);
	q.Enqueue_rear(8);
	q.Enqueue_rear(9);
	q.Display();
	q.Enqueue_front(10);
	q.Dequeue_front();
	q.Enqueue_front(10);
	q.Dequeue_rear();
	q.Dequeue_rear();
	q.Dequeue_rear();
	q.Dequeue_rear();
	q.Dequeue_rear();
	cout<<endl;
//	q.Display();




	return 0;
}

