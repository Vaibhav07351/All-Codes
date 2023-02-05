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



void DisplayCLL(Node *head)
{
	Node *p=head;
	if(p==NULL)
	return;

		
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
	
}

 

int CountCLL(Node *head)
{
	
	Node*p=head;
	int c=0;
	
	if(head==NULL)
	return 0;
	
	do
	{	
		p=p->next;
		c++;
	}	while(p!=head);
	
	return c;
	
	
}




void InsertCLL(int pos,int val)
{
	
	Node *p=first;
	Node *t= new Node;
	t->data=val;
	
	if(pos<0 || ( pos> CountCLL(first) )  )
	return;
	
	if(pos==0)
	{	
		
		if(p==NULL)
		{
			first=t;
			t->next=t;
			return;
		}
		
		
		
		while(p->next!=first)
		p=p->next;
		
		t->next=first;
		p->next=t;
		first=t;
		
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		p=p->next;
				
		t->next=p->next;
		p->next=t;
		
	}
	
	
	
}


int DeleteCLL(int pos)
{
	Node *q=first;
	Node *p=first;
	int x;
	
	
	if(pos<1 || pos>CountCLL(first) || first==NULL)
	return 0;
	
	if(pos==1)
	{
		
		if(CountCLL(first)==1)
		{
			delete first;
			first=NULL;
			return 0;
		}
		
		
		while(p->next!=first)
		p=p->next;
		
		p->next=q->next;
		first=q->next;
		x=q->data;
	
		q=NULL;
		delete q;
		return x;
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		
		q->next=p->next;
		
		x=p->data;
		p->next=NULL;
		p=NULL;
		delete p;
		
	}
	
	return x;
	
}











signed main()
{
	
	InsertCLL(0,2);   //Creates a linked list by first sending 0th index
	InsertCLL(1,4);
	InsertCLL(2,8);
	InsertCLL(3,7);
	InsertCLL(4,6);
	InsertCLL(5,9);
	InsertCLL(0,5);
	InsertCLL(2,100);
	InsertCLL(8,20);
		
	cout<<CountCLL(first)<<endl;	
	DisplayCLL(first);
	DeleteCLL(1);
	cout<<endl<<CountCLL(first)<<endl;	
	DisplayCLL(first);
		DeleteCLL(3);
	cout<<endl<<CountCLL(first)<<endl;	
	DisplayCLL(first);

	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	DeleteCLL(1);
	cout<<endl<<CountCLL(first)<<endl;	
	DisplayCLL(first);
	
	return 0;
}


