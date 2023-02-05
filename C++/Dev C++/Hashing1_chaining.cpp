#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node
{
	public:
	
	int data;
	Node *next;
		
};

void SortedLL(Node **head,int value)
{
	Node *p=*head;
	Node *q=NULL;
	
	Node *t= new Node;
	
	t->data=value;
	t->next=NULL;
	
	if(head==NULL)
	{
		*head=t;
	}
	
	else
	{
		while(p!=NULL && p->data<value)
		{
			q=p;
			p=p->next;
		}
		
		
		if(p==*head)
		{
			t->next=*head;
			*head =t;
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


int hashfn(int key)
{
	return key%10;
}


void HashInsert(Node *HT[],int key)
{
	int index=hashfn(key);
	SortedLL(&HT[index],key);
	
}



signed main()
{
	Node *HT[10];
	
	for(int i=0;i<10;i++)
	{	
		HT[i]=NULL;
	}
	
	HashInsert(HT,12);
	HashInsert(HT,52);
	HashInsert(HT,32);
	HashInsert(HT,2);
	HashInsert(HT,35);
	HashInsert(HT,6);
	HashInsert(HT,17);	
	HashInsert(HT,5);
		
	Display(HT[2] );

	
	return 0;
}

