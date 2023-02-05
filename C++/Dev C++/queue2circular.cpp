#include<bits/stdc++.h>
#define int long long int
using namespace std;

class CQueue
{
	private:
	int data;	
	int size;
	int front;
	int rear;
	int *Q;
	
	public:
	
	CQueue()
	{  
		front=-1;
		rear=-1;
		size=5;
		Q=new int[size];
	}
	
	
	CQueue(int x)
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

int CQueue::Count()
{
	
	if(front==-1 && rear==-1)
	return 0;
	
	else
	{
		int c=0;
		int temp=front;
		if(front<=rear)
		{
			while(temp<=rear)
			{
				c++;
				temp=(temp+1);
				
			}
		}
		else
		{
			while(temp<=size-1)
			{
				c++;
				temp++;
			}
			temp=0;
			while(temp<=rear)
			{
				c++;
				temp++;
			}
			
		}
		
		return c;
	}
	
	
}


void CQueue::Enqueue(int x)
{
	
	if( (front==0 && rear==size-1) ||  (rear==front-1))
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
		rear=(rear+1)%size;
		Q[rear]=x;
		
	}
	
		
}


int CQueue::Dequeue()
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
			
			front=(front+1)%size;
			
			return x;	
		}
		
		
	}
	
	
}

void CQueue::Display()
{
	
	if(front==-1 && rear==-1)
	{
		cout<<endl<<"Queue empty!!"<<endl;
		return;
	}
	
	else
	{
		int temp=front;
	//	cout<<endl<<"f="<<front<<" r= "<<rear<<endl;		
		if(front<=rear)
		{
			while(temp<=rear)
			{
				cout<<Q[temp]<<" ";
				temp=(temp+1);
				
			}
		}
		else
		{
			while(temp<=size-1)
			{
				cout<<Q[temp]<<" ";
				temp++;
			}
			temp=0;
			while(temp<=rear)
			{
				cout<<Q[temp]<<" ";
				temp++;
			}
			
		}
		
	}
	
	
}



int CQueue::isEmpty()
{
	
	if(front==-1 && rear==-1)
	return 1;
	else 
	return 0;
	
}


int CQueue::isFull()
{
	
	if( (front==0 && rear==size-1 ) ||  rear==front-1  )
	return 1;
	else 
	return 0;
	
}


signed main()
{
	CQueue cq;
	
//	cout<<cq.isEmpty()<<endl;
//	cout<<cq.isFull()<<endl;
	cq.Enqueue(5);
	cq.Enqueue(6);
	cq.Enqueue(7);
	cq.Enqueue(8);
	cq.Enqueue(11);
	cq.Dequeue();
	cq.Dequeue();
//	cq.Enqueue(1);
	cq.Enqueue(15);
	cq.Enqueue(16);
	cq.Enqueue(4);
	
	cq.Display();
	cout<<endl<<cq.isFull();
	
	return 0;
}

