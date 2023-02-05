#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node
{
	public:
	
	int data;
	Node *next;
		
};
Node *first=NULL;


void Insert(int pos,int val)
{
		
		if(pos<0 )
		return;
		
		Node *t=new Node;
		t->data=val;
		
		if(pos==0)
		{
			t->next=first;
			first=t;
		}
		
		else
		{
			Node *p=first;	
			
			for(int i=0;i<pos-1;i++)
			{
				p=p->next;
			}
			
			if(p!=NULL)
			{
				t->next=p->next;
				p->next=t;
			}
			
		}
	
}



void Display(Node *first)
{	
	Node *p=first;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}



bool isSorted(Node *head)
{
	Node *p=head;
	
	int x=-32768;
	
	while(p!=NULL)
	{
		
		if(p->data<x)
		return false;
		
		x=p->data;
		p=p->next;

	}
	
	return true;
	
	
}


void RemoveDuplicate(Node *head)
{
	
	Node *p=head;
	Node *q=p;
	
	p=p->next;
	
	if(p==NULL)
	return;
	
	while(p!=NULL)
	{	
		if(q->data==p->data)
		{	
			q->next=p->next;
			delete p;
			p=q->next;
		}
		else
		{	
			q=p;
			p=p->next;
		}
	
	}
	
	
	
}


signed main()
{
	
	Insert(0,10);   //Creates a linked list by first sending 0th index
	Insert(1,10);
	Insert(2,20);
	Insert(3,20);
	Insert(4,20);
	Insert(5,40);
	Display(first);
	
	cout<<endl<<isSorted(first);
	RemoveDuplicate(first);
	cout<<endl;
	Display(first);
		
	return 0;
}


