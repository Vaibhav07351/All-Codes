#include<bits/stdc++.h>
#define int long long int
using namespace std;
class TNode;

class Node
{	
	public:
	TNode *data;
	Node *next;
};


class Queue
{
	public:
	Node *front;
	Node *rear;
	Queue()
	{	
		front=rear=NULL;
	}	
	void Enqueue(TNode *val);
	TNode *Dequeue();
	int isEmpty();
};


void Queue::Enqueue(TNode *val)
{
	
	Node *t=new Node;
	t->data=val;
	t->next=NULL;
	if(t==NULL)
	{
		cout<<endl<<"Queue Full!!"<<endl;
		return;
	}
	
	if(front==NULL)
	{
		front=rear=t;
	}
	else
	{
		rear->next=t;
		rear=t;
		
	}
	
}

TNode *Queue::Dequeue()
{
	
	if(front==NULL)
	{
		cout<<endl<<"Queue Empty!!"<<endl;
		return NULL;
	}
	
	else
	{
		Node *p= front;	
		TNode *x;	
		front=front->next;
		
		x=p->data;
		delete p;
		return x;
	}

}



int Queue::isEmpty()
{
	
	if(front==NULL)
	return 1;
	else 
	return 0;
	
}

class TNode
{
	public:
	TNode *lchild=NULL;
	int data;
	TNode *rchild=NULL;
};


class Tree
{	
	public:
	TNode *root=NULL;
	
	Queue q;
	
	void create();
	void Preorder(TNode *p);
	void Inorder(TNode *p);
	void Postorder(TNode *p);
	
	void ITPreorder(TNode *p);
	void ITInorder(TNode *p);

};


void Tree::create()
{
	int val;
	cout<<"Enter the value of Root : ";
	cin>>val;
	
	TNode *t=new TNode;
	t->data=val;
	
	root=t;
	root->lchild=NULL;
	root->rchild=NULL;
	
	q.Enqueue(root);
	
	while(!q.isEmpty())
	{
		TNode *p;
		p= q.front->data;		
		
		cout<<endl<<"Enter "<<p->data<<" left Child value : ";
		cin>>val;
		
		q.Dequeue();
		
		if(val!=-1)
		{
			TNode *t=new TNode;
			t->data=val;
			p->lchild=t;
			q.Enqueue(t);
		}
		
		cout<<endl<<"Enter "<<p->data<<" right Child value : ";
		cin>>val;
		if(val!=-1)
		{
			TNode *t=new TNode;
			t->data=val;
			p->rchild=t;
			q.Enqueue(t);
		}
		

		
		
	}
	
}

void Tree::Preorder(TNode *p)
{	
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		Preorder(p->lchild);
		Preorder(p->rchild);
	}
	
}


void Tree::Inorder(TNode *p)
{	
	if(p!=NULL)
	{
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
	}
	
}


void Tree::Postorder(TNode *p)
{	
	if(p!=NULL)
	{
		Postorder(p->lchild);
		Postorder(p->rchild);
		cout<<p->data<<" ";
	}
	
}


class SNode
{	
	public:
		
	TNode *data;
	SNode *next;
	
};

class Stack
{
	
	public:
	SNode *Top;
	
	Stack()
	{
		Top=NULL;
	}
	
	void push(TNode *x);
	TNode *pop();
	int isEmpty();
};


void Stack::push(TNode *val)
{
	SNode *t=new SNode;
	
	if(t==NULL)
	return;
	
	t->data=val;
	t->next=Top;
	Top=t;
	
}

TNode *Stack::pop()
{
	TNode *x;
	
	if(Top==NULL)
	return NULL;
	
	else
	{
		SNode *p=Top;
		x=Top->data;
		Top=Top->next;
		delete p;
		return x;
	}
	
	
}

int Stack::isEmpty()
{
	
	if(Top==NULL)
	return 1;
	else
	return 0;
	
}



void Tree::ITPreorder(TNode *p)
{
	
	Stack st;	
	
	while(p!=NULL || !st.isEmpty())
	{
		
		if(p!=NULL)
		{
			cout<<p->data<<" ";
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.Top->data;
			st.pop();
			p=p->rchild;
			
		}
		
		
	}
	
}


void Tree::ITInorder(TNode *p)
{
	
	Stack st;	
	
	while(p!=NULL || !st.isEmpty())
	{
		
		if(p!=NULL)
		{
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.Top->data;
			st.pop();
			cout<<p->data<<" ";
			p=p->rchild;
			
		}
		
		
	}
	
}





signed main()
{
	Tree t;
	t.create();
	cout<<"Preorder values are : "<<endl;
	t.Preorder(t.root);
	cout<<endl<<"Inorder values are : "<<endl;
	t.Inorder(t.root);
	cout<<endl<<"Postorder values are : "<<endl;
	t.Postorder(t.root);
	
	cout<<endl<<"Iterative Preorder : "<<endl;
	t.ITPreorder(t.root);
	cout<<endl<<"Iterative Inorder : "<<endl;
	t.ITInorder(t.root);

	
	return 0;
}

