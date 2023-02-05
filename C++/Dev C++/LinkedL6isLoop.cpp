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


int isLoop(Node *head)
{
	
	Node *p=head,*q=head;
	
	do
	{
		q=q->next;
		p=p->next;
		if(p!=NULL)
		p=p->next;
		
	}while( (p!=NULL&&q!=NULL)&& (p!=q)  );
	

	if(p==q)
	return 1;
	else
	return 0;	
	

	
}








signed main()
{
	
	Insert(0,10);   //Creates a linked list by first sending 0th index
	Insert(1,20);
	Insert(2,30);
	Insert(3,40);
	Insert(2,70);
	
//	Node *t1=first->next->next;
//	Node *t2=first->next->next->next->next;
//	t2->next=t1;
	
	cout<<isLoop(first)<<endl<<endl;
	
//	Display(first);
//	cout<<endl<<Count(first);
		
	return 0;
}


