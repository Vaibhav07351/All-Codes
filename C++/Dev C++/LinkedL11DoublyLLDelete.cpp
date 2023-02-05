#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node 
{
	public:
	Node *prev;
	int data;
	Node *next;
};

Node *first=NULL;


int CountDLL(Node *head)
{
	Node *p=head;
	
	if(p==NULL)
	return 0;
	
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	
	return c;
}



void InsertDLL(int pos,int x)
{
	Node *p=first;	
	Node *t= new Node;		
	t->data=x;
	t->prev=NULL;
	t->next=NULL;
	
	if(pos<0 || pos>CountDLL(first) )
	return;
		
	if(pos==0)
	{
		
		if(first==NULL)
		{
			first=t;
			return;
		}
		
		t->next=first;
		first->prev=t;
		first=t;		
		
	}
	
	else
	{
		
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		
		t->next=p->next;
		t->prev=p;
		if(p->next!=NULL)
		p->next->prev=t;
		p->next=t;
		
		
	}
	
	
}

void DisplayDLL(Node *head)
{
	Node *p=head;
	
	if(p==NULL)
	return;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}


void DeleteDLL(int pos)
{
	Node *p=first;
	int x;
	if(pos<1 || pos> CountDLL(first))	
	return;
	
	if(pos==1)
	{	
		if(first->next!=NULL)
		{
			first->next->prev=NULL;
		}
		
		
		first=first->next;
	
		x=p->data;
		delete p;	
		
	}
	else
	{
	
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
		}
			
		p->prev->next=p->next;
	
		if(p->next!=NULL)
		p->next->prev=p->prev;;
		
		x=p->data;
		delete p;
		
	}
	
	
}



signed main()
{	
	InsertDLL(0,1);
	InsertDLL(1,2);
	InsertDLL(2,3);
	InsertDLL(3,4);
	InsertDLL(4,5);
	InsertDLL(0,10);
	InsertDLL(2,20);
	InsertDLL(3,30);
	cout<<CountDLL(first)<<endl;
	DisplayDLL(first);

	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);

	DeleteDLL(2);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);

	DeleteDLL(2);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);

	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);

	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);


	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);


	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);


	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);


	DeleteDLL(1);
	cout<<endl<<CountDLL(first)<<endl;
	DisplayDLL(first);



	return 0;
}

