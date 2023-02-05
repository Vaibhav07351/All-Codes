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
	
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=head);
	
}


void DisplayCLLRec(Node *p)
{
	static int flag=0;
	
	
	if(flag==0 || p!=first)
	{
		cout<<p->data<<" ";
		flag=1;
		DisplayCLLRec(p->next);
		
	}
	
	flag=0;
	
}

int CountLL(Node *head)
{
	
	Node*p=head;
	int c=0;
	
	if(p==NULL)
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
	
	if(pos<0 || ( pos> CountLL(first) ) )
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
	
	cout<<CountLL(first)<<endl;	
	DisplayCLL(first);
	
	return 0;
}


