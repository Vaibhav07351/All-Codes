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

void SortedLL(Node *head,int value)
{
	Node *p=head;
	Node *q=NULL;
	
	Node *t= new Node;
	
	t->data=value;
	t->next=NULL;
	
	if(first==NULL)
	{
		first=t;
	}
	
	else
	{
		while(p!=NULL && p->data<value)
		{
			q=p;
			p=p->next;
		}
		
		
		if(p==first)
		{
			t->next=first;
			first =t;
		}
		else
		{
			t->next=q->next;
			q->next=t;
			
		}
		
		
	}
	
}


void Display(Node *head)
{
	
	Node *p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}



signed main()
{
	
	SortedLL(first,5);
	SortedLL(first,15);
	SortedLL(first,5123);
	SortedLL(first,532);
	SortedLL(first,1);
	Display(first);

	return 0;
}

