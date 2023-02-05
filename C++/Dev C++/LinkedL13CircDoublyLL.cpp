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


int CountCDLL(Node *head)
{
	Node *p=head;
	
	if(p==NULL)
	return 0;
	
	
	int c=0;
	do
	{
		c++;
		p=p->next;
		
	}while(p!=head);
	
	return c;	
	
}



void InsertCDLL(int pos ,int val)
{
	
	Node *p=first;
	Node *t=new Node;
	t->prev=t;
	t->data=val;
	t->next=t;
	
	if(pos<0 || pos>CountCDLL(first))
	return;
	
	if(pos==0)
	{
		
		if(p==NULL)
		{
			first=t;
			return;
		}
		
		
		t->next=p;
		p->prev->next=t;
		t->prev=p->prev;
		p->prev=t;
		
		first=t;
	}
	else
	{
		
		for(int i=0;i<pos-1;i++)	
		p=p->next;

		
		t->next=p->next;
		t->prev=p;
		p->next->prev=t;
		p->next=t;
		
	}
	
}



int DeleteCDLL(int pos)
{
	
	Node *p=first;	
	int x=0;
	
	if(pos<1 || pos > CountCDLL(first))
	return 0;
		
	if(pos==1)
	{	
		if(CountCDLL(first)==1)
		{
			delete first;
			first=NULL;
			
			return 0;
		}
	
		first->prev->next=first->next;
		first->next->prev=first->prev;
		x=first->data;
		delete first;
		first=p->next;
	}
	
	else
	{
		
		for(int i=0;i<pos-1;i++)
		p=p->next;
		
		p->prev->next=p->next;
		p->next->prev=p->prev;
		x=p->data;
		delete p;
		
		
	}
	
	return x;
	
	
}




void DisplayCDLL(Node *head)
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






signed main()
{

	InsertCDLL(0,1);
	InsertCDLL(1,2);
	InsertCDLL(2,3);
	InsertCDLL(3,4);
	InsertCDLL(4,5);
	InsertCDLL(0,6);
	InsertCDLL(0,7);
	InsertCDLL(4,8);
	InsertCDLL(8,9);
	
	cout<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
	
	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
	
	DeleteCDLL(2);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
		
	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
		
	DeleteCDLL(4);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);

	DeleteCDLL(5);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
			
	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);

	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);

	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
		
	DeleteCDLL(1);
	cout<<endl<<CountCDLL(first)<<endl;
	DisplayCDLL(first);
	
	
	return 0;
}

