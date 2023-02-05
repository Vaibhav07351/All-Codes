#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node
{	
	public:
		
	int data;
	Node *next;
	
};

class Stack
{
	Node *Top;
	public:
	
	Stack()
	{
		Top=NULL;
	}
	
	void push(int x);
	int pop();
	int peek(int x);
	void Display();
	int isEmpty();
	int isFull();
	int count();
};


int Stack::count()
{
	
	if(Top==NULL)
	return 0;
	
	else
	{
		int i=0;
		Node *temp=Top;
		while(temp!=NULL)
		{
			temp=temp->next;
			i++;
		}	
		
		return i;
	}
	
	
	
}



void Stack::push(int val)
{
	Node *t=new Node;
	
	if(t==NULL)
	return;
	
	t->data=val;
	t->next=Top;
	Top=t;
	
}

int Stack::pop()
{
	int x;
	
	if(Top==NULL)
	return -1;
	
	else
	{
		Node *p=Top;
		x=Top->data;
		Top=Top->next;
		delete p;
		return x;
	}
	
	
}


void Stack::Display()
{
	if(Top==NULL)
	return;
	
	else
	{
		Node *temp=Top;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		
	}
	
	
	
}


int Stack::peek(int pos)
{
	
	Stack st;
	
	if(Top==NULL ||pos>st.count() )
	return -1;
	
	else
	{	
	
		Node *p=Top;	
		int i=0;
		while(p!=NULL && i<pos-1 )
		{
			p=p->next;
			i++;
		}
		
		return p->data;
	}
	
}


int Stack::isEmpty()
{
	
	if(Top==NULL)
	return 1;
	else
	return 0;
	
}

int Stack::isFull()
{
	
	Node *t=new Node;
	if(t==NULL)
	return 1;
	else
	return 0;
	
}





signed main()
{
	Stack st;
	st.push(5);
	st.push(6);
	st.push(7);
	st.push(8);
	st.push(9);
	cout<<st.count()<<endl<<endl;
	st.Display();
	st.pop();
	st.pop();
	cout<<endl;
	cout<<st.count()<<endl<<endl;
	st.Display();
	cout<<endl;
	cout<<st.isFull();
	

	return 0;
}

