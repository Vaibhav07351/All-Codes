#include<bits/stdc++.h>
#define int long long int
using namespace std;
class BSTNode;

class Node
{	
	public:
	BSTNode *data;
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
	void Enqueue(BSTNode *val);
	BSTNode *Dequeue();
	int isEmpty();
};


void Queue::Enqueue(BSTNode *val)
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

BSTNode *Queue::Dequeue()
{
	
	if(front==NULL)
	{
		cout<<endl<<"Queue Empty!!"<<endl;
		return NULL;
	}
	
	else
	{
		Node *p= front;	
		BSTNode *x;	
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
	
	void LevelOrder(BSTNode *p);
	BSTNode *RInsert(BSTNode *p,int val);
	void Insert(BSTNode *p,int val);
	void Search(int val);
	BSTNode *Delete(BSTNode *p, int val);
	int Height(BSTNode *p);
	BSTNode *InPre(BSTNode *p);
	BSTNode *InSucc(BSTNode *p);
};


BSTNode* BST::RInsert(BSTNode *p,int  val)
{
	
	if(p==NULL)
	{
		BSTNode *t=new BSTNode;
		t->data=val;
		t->lchild=t->rchild=NULL;
		return t;
	}
	
	else if(p->data==val)
	{
		 return p;
	}
	
	else if(val<p->data)
	{
		 p->lchild=RInsert(p->lchild,val);
	}
	
	else 
	{
		 p->rchild=RInsert(p->rchild,val);
	}
		
}




void BST::Insert(BSTNode *p,int  val)
{
	
	if(p==NULL)
	{
		BSTNode *t=new BSTNode;
		t->data=val;
		t->lchild=t->rchild=NULL;
		root=t;
		return ;
	}
	
 	BSTNode *q=NULL;
 	
 	while(p!=NULL)
 	{
 		q=p;
		 	
 		if(val==p->data)	
 		return;
		 
		else if(val<p->data) 	
 		{
 			p=p->lchild;	
		}	
 		else
		 p=p->rchild;	
	 			
 	}
 	
	BSTNode *t=new BSTNode;
	t->data=val;
	t->lchild=t->rchild=NULL;
			
 	if(val<q->data)
 	q->lchild=t;
 	else
 	q->rchild=t;
 	
 	
}



void BST::Search(int val)
{
	
	BSTNode *p=root;
	
	while(p!=NULL)
	{
		if(p->data==val)
		{
			cout<<val<<" found in the BST";
			return;
		}
		else if(val<p->data)
		p=p->lchild;
		else
		p=p->rchild;
	}
	
	if(p==NULL)
	cout<<val<<" not found in BST";
	
	
}


int BST::Height(BSTNode *p)
{
	int x=0,y=0;
	
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


BSTNode *BST::InPre(BSTNode *p)
{
	
	while(p!=NULL && p->rchild)
	{
		p=p->rchild;
	}
	
	return p;
		
}


BSTNode *BST::InSucc(BSTNode *p)
{
	
	while(p!=NULL && p->lchild)
	{
		p=p->lchild;
	}
	
	return p;
		
}




BSTNode *BST::Delete(BSTNode *p,int val)
{	
	if(p==NULL)
	return NULL; 
	
	BSTNode *q;
	
	if(p->lchild==NULL && p->rchild==NULL)
	{
		
		delete p;
		return NULL;
	}
	
	
	if(val<p->data)
	{
		p->lchild=Delete(p->lchild,val);
	}
	
	if(val>p->data)
	{
		p->rchild=Delete(p->rchild,val);
	}
	if(val==p->data)
	{
		if(Height(p->lchild) >= Height(p->rchild))
		{
			q=InPre(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild,q->data);
		}
		
		else
		{
			q=InSucc(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild,q->data);
		}
		
	}
	
	return p;
	
}





void BST::LevelOrder(BSTNode *p)
{
	Queue q;
    BSTNode *temp;
	q.Enqueue(p);
	
	while(!q.isEmpty())
	{
		p=q.front->data;
		cout<<p->data<<" ";
		
		if(p->lchild!=NULL)
		q.Enqueue(p->lchild);
		
		if(p->rchild!=NULL)
		q.Enqueue(p->rchild);
		
		q.Dequeue();
		
	}
	

}


signed main()
{

	BST bst;
	
//	bst.root=bst.RInsert(bst.root,9);
//	bst.RInsert(bst.root,15);
//	bst.RInsert(bst.root,5);
//	bst.RInsert(bst.root,20);
//	bst.RInsert(bst.root,16);
//	bst.RInsert(bst.root,8);
//	bst.RInsert(bst.root,12);
//	bst.RInsert(bst.root,3);
//	bst.RInsert(bst.root,6);
//	bst.RInsert(bst.root,13);
//	bst.LevelOrder(bst.root);

	
	bst.Insert(bst.root,50);
	bst.Insert(bst.root,20);
	bst.Insert(bst.root,70);
	bst.Insert(bst.root,10);
	bst.Insert(bst.root,40);
	bst.Insert(bst.root,60);
	bst.Insert(bst.root,80);
	bst.Insert(bst.root,5);
	bst.Insert(bst.root,30);
	bst.Insert(bst.root,75);
	bst.Insert(bst.root,90);
	bst.LevelOrder(bst.root);
	cout<<endl;
//	bst.Search(9);
//	cout<<endl;
//	bst.Search(500);
	cout<<endl;
	bst.Delete(bst.root,50);
	cout<<endl;
	bst.LevelOrder(bst.root);
	


	return 0;
}

