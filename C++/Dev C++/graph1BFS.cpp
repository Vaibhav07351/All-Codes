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
	public:
	Node *front;
	Node *rear;
	Queue()
	{	
		front=rear=NULL;
	}	
	void Enqueue(int val);
	int Dequeue();
	int isEmpty();
};

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

void BFS(int G[][7],int start,int n)
{
	Queue q;
	int i;
	int visited[7]={0,0,0,0,0,0,0};
	
	cout<<start<<" ";
	
	visited[start]=1;
	q.Enqueue(start);
	
	while(!q.isEmpty())
	{
		i=q.front->data;
		q.Dequeue();
		
		for(int v=1;v<n;v++)
		{
			
			if(G[i][v]==1 && visited[v]!=1 )
			{
				cout<<v<<" ";	
				visited[v]=1;
				q.Enqueue(v);
			}
			
		}
		
		
	}
	
	
}





signed main()
{

	int G[7][7]={{0,0,0,0,0,0,0},
			 	 {0,0,1,1,0,0,0},
				 {0,1,0,0,1,0,0},
				 {0,1,0,0,1,0,0},
				 {0,0,1,1,0,1,1},
				 {0,0,0,0,1,0,0},
				 {0,0,0,0,1,0,0}};



	BFS(G,4,7);




	return 0;
}

