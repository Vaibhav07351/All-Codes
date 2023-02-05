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
Node *second=NULL;

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


void Insert2(int pos,int val)
{
		
		if(pos<0 )
		return;
		
		Node *t=new Node;
		t->data=val;
		
		if(pos==0)
		{
			t->next=second;
			second=t;
		}
		
		else
		{
			Node *p=second;	
			
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

int Count(Node *head)
{
	if(first == NULL)
	return 0;
	
	int c=0;
	Node *p=head;
	
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	
	return c;
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


void Merge(Node *head1,Node *head2)
{
	Node *third,*last;
		if(first->data<second->data)
		{
				third=last=first;
				first=first->next;
				last->next=NULL;
			
		}
		else
		{
				third=last=second;
				second=second->next;
				second->next=NULL;
			
		}
		
	while(first!=NULL && second!=NULL)
	{
		
			if(second->data<first->data)
			{
				last->next=second;
				last=second;
				second=second->next;
				last->next=NULL;
			}
			
			
			else
			{
				last->next=first;
				last=first;
				first=first->next;
				last->next=NULL;
			}
	
		
	}
	
	if(first!=NULL)
	last->next=first;
	else
	last->next=second;
	
	first=third;
	
	
}










signed main()
{
	
	Insert(0,10);   //Creates a linked list by first sending 0th index
	Insert(1,40);
	Insert(2,70);
	Insert(3,85);
	Insert(4,90);
	
	Insert2(0,5);   //Creates a linked list by first sending 0th index
	Insert2(1,20);
	Insert2(2,50);
	Insert2(3,80);
	Insert2(4,110);
	
	
	Display(first);
	cout<<endl;
	Display(second);

	cout<<endl;
	Merge(first,second);
	Display(first);
	
	
	
	
	
		
	return 0;
}


