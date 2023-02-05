#include<bits/stdc++.h>
#define int long long int
using namespace std;

class BSTNode;

class SNode
{	
	public:
		
	BSTNode *data;
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
	
	void push(BSTNode *x);
	BSTNode *pop();
	int isEmpty();
};


void Stack::push(BSTNode *val)
{
	SNode *t=new SNode;
	
	if(t==NULL)
	return;
	
	t->data=val;
	t->next=Top;
	Top=t;
	
}

BSTNode *Stack::pop()
{
	BSTNode *x;
	
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


class BSTNode
{
	public:
	BSTNode *lchild;
	int data;
	BSTNode *rchild;
};


class BST
{
	public:	
	
	BSTNode *root;
	BST()
	{
		root=NULL;
	}
	
	void CreatePre(int pre[],int n);
	void InOrder(BSTNode *p);
};


void BST::CreatePre(int pre[],int n)
{
	int i=0;
	Stack st;
	BSTNode *p;
	
	BSTNode *t = new BSTNode;
	t->data=pre[i];
	i++;
	t->lchild=t->rchild=NULL;
	root=t;
	p=t;
	
	while(i<n)
	{
		
		if(pre[i] < p->data )
		{
			BSTNode *t=new BSTNode;		
			t->data=pre[i];
			i++;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			st.push(p);
			p=t;
		}
	
		
		else
		{

			 if( st.isEmpty() ||  pre[i] < st.Top->data->data  )
			{
			
				BSTNode *t=new BSTNode;		
				t->data=pre[i];
				i++;
				t->lchild=t->rchild=NULL;
				p->rchild=t;
				p=t;
				
			}
			else
			{
				p=st.Top->data;
				st.pop();
			}
			
			
		}
		
		
		
	}
	
		
}

void BST:: InOrder(BSTNode *p)
{
	if(p!=NULL)
	{	
		InOrder(p->lchild);
		cout<<p->data<<" ";
		InOrder(p->rchild);
	}
	
}





signed main()
{

	BST bst;
	int arr[8]={30,20,10,15,25,40,50,45};

	bst.CreatePre(arr,8);
	
	bst.InOrder(bst.root);
	

	return 0;
}

