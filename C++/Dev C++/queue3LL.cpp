#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node
{	
	public:
	int data;
	Node *next;
};


class Queue
{
	Node *front;
	Node *rear;
	public:
	Queue()
	{	
		front=rear=NULL;
	}	
	void Enqueue(int val);
	int Dequeue();
	int Count();
	void Display();
	int isEmpty();
};


int Queue::Count()
{
	
	if(front==NULL)
	{
		return 0;
	}
	else
	{
		int c=0;
		Node *p=front;
		while(p!=NULL)
		{
			c++;
			p=p->next;
		}
		return c;
	}
	
	
}




void Queue::Enqueue(int val)
{
	
	Node *t=new Node;
	t->data=val;
	t->next=NULL;
	if(t==NULL)
	{
		cout<<endl<<"Queue Full!!"<<endl;
		return;
	}
	
	if(front==NULL)
	{
		front=rear=t;
	}
	else
	{
		rear->next=t;
		rear=t;
		
	}
	
}

int Queue::Dequeue()
{
	
	if(front==NULL)
	{
		cout<<endl<<"Queue Empty!!"<<endl;
		return -1;
	}
	
	else
	{
		Node *p= front;	
		int x;	
		front=front->next;
		
		x=p->data;
		delete p;
		return x;
	}

}

int Queue::isEmpty()
{	
	if(front==NULL)
	{
		return 1;
	}
	else
	return 0;
	
}


void Queue::Display()
{
	
	Node *p=front;
	
	if(front==NULL)
	{
		cout<<"Queue Empty!!"<<endl;
		return;
	}
	
	
	else
	{
		
		while(p!=NULL)	
		{
			cout<<p->data<<" ";
			p=p->next;
		}
		
	}
	
	
}




signed main()
{
	
	Queue q;
	q.Display();
	q.Enqueue(5);
	q.Enqueue(6);
	q.Enqueue(7);
	q.Enqueue(8);
//	q.Enqueue(9);
//	q.Enqueue(10);
	cout<<endl<<q.Count()<<endl;
	q.Display();
	q.Dequeue();
	q.Dequeue();
//	q.Dequeue();
//	q.Dequeue();
	cout<<endl;
	q.Display();
	cout<<endl<<q.Count();
	

	return 0;
}

