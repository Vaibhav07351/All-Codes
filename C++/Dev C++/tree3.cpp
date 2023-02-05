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
	void LevelOrder(TNode *p);
	void TopView(TNode *p);
	int Count(TNode *p);
	int Count2deg(TNode *p);
	int Count1deg(TNode *p);
	int CountLeaf(TNode *p);
	int TSum(TNode *p);
	int Height(TNode *p);
	
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


void Tree::LevelOrder(TNode *p)
{
	
	Queue q;
	TNode *temp;
	
	q.Enqueue(p);
	
	while(!q.isEmpty())
	{
		temp=q.front->data;
		cout<<temp->data<<" ";
		
		if(temp->lchild!=NULL)
		{	
			q.Enqueue(temp->lchild);
			
		}
		
		if(temp->rchild!=NULL)
		{	
			q.Enqueue(temp->rchild);
		}
		
		
		q.Dequeue();

	}
	
	
}

//void Tree::TopView(TNode *p)
//{
//
//	static vector<int > arr1;
//	static vector<int > arr2;
//
//	TNode *temp=p;
//
//	while(temp!=NULL)
//	{
//		arr1.push_back(temp->data);
//		temp=(temp->lchild);
//	}
//	temp=p;
//	while(temp!=NULL)
//	{
//		arr2.push_back(temp->data);
//		temp=(temp->rchild);
//	}
//	
//	reverse(arr1.begin(),arr1.end());
//	arr1.pop_back();
//
//	for(int i=0;i<arr2.size();i++)
//	{
//		arr1.push_back(arr2[i]);
//	}
//
//	for(int i=0;i<arr1.size();i++)
//	{
//		cout<<arr1[i]<<" ";
//	}
//
//}
//


int Tree::Count(TNode *p)
{
	
	int x,y;	
	
	if(p!=NULL)
	{
		
		x=Count(p->lchild);
		y=Count(p->rchild);
		
		return x+y+1;				
	}
	else
	return 0;	
	

	
}


int Tree::Count2deg(TNode *p)
{
	
	int x,y;	
	
	if(p!=NULL )
	{
		
		x=Count2deg(p->lchild);
		y=Count2deg(p->rchild);
		
		if(p->lchild!=NULL && p->rchild!=NULL)
		return x+y+1;
		else
		return x+y;		
	}
	
	else
	return 0;	
	
}



int Tree::Count1deg(TNode *p)
{
	
	int x,y;	
	
	if(p!=NULL )
	{
		x=Count1deg(p->lchild);
		y=Count1deg(p->rchild);
		
		if( (p->lchild==NULL && p->rchild!=NULL)  || (p->lchild!=NULL && p->rchild==NULL)    )
		return x+y+1;
		else
		return x+y;			
	}
	
	else
	return 0;	
	
}


int Tree::CountLeaf(TNode *p)
{
	
	int x,y;	
	
	if(p!=NULL )
	{
		x=CountLeaf(p->lchild);
		y=CountLeaf(p->rchild);
		
		if( (p->lchild==NULL && p->rchild==NULL)  )
		return x+y+1;
		else
		return x+y;			
	}
	
	else
	return 0;	
	
}



int Tree::TSum(TNode *p)
{
	
	int x,y;	
	
	if(p!=NULL )
	{
		
		x=TSum(p->lchild);
		y=TSum(p->rchild);
		
		return x+y+p->data;
				
	}
	
	else
	return 0;	
	
}


int Tree::Height(TNode *p)
{
	int x,y;
	if(p!=NULL)
	{
		
		x=Height(p->lchild);
		y=Height(p->rchild);
		
		if(x>y)
		return x+1;
		else
		return y+1;	
	}
	
	else
	return -1;
	
}










signed main()
{
	Tree t;
	t.create();
	cout<<endl<<endl;
	cout<<"Preorder values are : "<<endl;
	t.Preorder(t.root);
	cout<<endl<<"Inorder values are : "<<endl;
	t.Inorder(t.root);
	cout<<endl<<"Postorder values are : "<<endl;
	t.Postorder(t.root);
	cout<<endl<<"Level Order values are : "<<endl;
	t.LevelOrder(t.root);
//	cout<<endl<<"Top View values are : "<<endl;
//	t.TopView(t.root);
	cout<<endl<<"Count of tree is : "<<t.Count(t.root);	
	cout<<endl<<"2 degree nodes are : "<<t.Count2deg(t.root);	
	cout<<endl<<"1 degree nodes are : "<<t.Count1deg(t.root);
	cout<<endl<<"Total Leaf nodes are : "<<t.CountLeaf(t.root);		
	cout<<endl<<"Sum of all tree nodes are : "<<t.TSum(t.root);	
	cout<<endl<<"Height of tree is : "<<t.Height(t.root);	
	
	
	return 0;
}

