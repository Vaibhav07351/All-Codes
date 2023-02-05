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


void Concat(Node *head1,Node *head2)
{
	
	Node *h1=head1,*h2=head2;
	
	while(h1->next!=NULL)
	h1=h1->next;
	
	h1->next=h2;
	
	h2=NULL;
	
}






signed main()
{
	
	Insert(0,10);   //Creates a linked list by first sending 0th index
	Insert(1,20);
	Insert(2,30);
	Insert(3,40);
	Insert(2,70);
	
	Insert2(0,400);   //Creates a linked list by first sending 0th index
	Insert2(1,500);
	Insert2(2,600);
	Insert2(3,700);
	Insert2(2,800);
	
	
	Display(first);
	cout<<endl;
	Display(second);
	
	Concat(first,second);
	cout<<endl;
	
	Display(first);
	
	
	
	
	
		
	return 0;
}


