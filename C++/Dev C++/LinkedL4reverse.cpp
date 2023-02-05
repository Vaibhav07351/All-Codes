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


void ReverseByData(Node *head)
{
	Node *p=head;
	int size= Count(head);	
	
	int arr[size];
	int i=0;
	while(p!=NULL)
	{
		arr[i]=p->data;
		i++;
		p=p->next;
	}
	
	i--; //bring i back to last of array as one extra incremented in checking
	p=head;
	
	
	while(p!=NULL)
	{
		p->data=arr[i];
		i--;
		p=p->next;
	}
	
}



void ReverseLink(Node *head)
{
	Node *r=NULL,*q=NULL,*p=head;
	
	while(p!=NULL)
	{
		
		r=q;
		q=p;
		p=p->next;
		
		q->next=r;
		
	}
	
	first=q;
}


void ReverseRecursive(Node *q,Node *head)
{	                                                                                                                                        
	Node *p=head;
	
	if(p!=NULL)
	{
		ReverseRecursive(p,p->next);
		
		p->next=q;				//while returning at last change links
	}
	else 						//when reached at end during travesing change head to last link
	{	
		first=q;
	}
	
	
}




signed main()
{
	
	Insert(0,10);   //Creates a linked list by first sending 0th index
	Insert(1,20);
	Insert(2,30);
	Insert(3,40);
	Insert(4,50);
	Insert(5,60);
	Display(first);
	
//	cout<<endl<<isSorted(first);
//	RemoveDuplicate(first);
	cout<<endl;
//	ReverseByData(first);
//	ReverseLink(first);
	ReverseRecursive(NULL,first);		
	Display(first);
		
	return 0;
}


