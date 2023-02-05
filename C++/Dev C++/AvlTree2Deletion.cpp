#include<bits/stdc++.h>
#define int long long int
using namespace std;



class AVLNode 
{
	public:
	AVLNode *lchild;
	int data;
	int height;
	AVLNode *rchild;
};

class AVL
{
	public:	
	AVLNode *root;
	AVL()
	{
		root=NULL;
	}
	AVLNode *RInsert(AVLNode *p, int val);
	int NodeHeight(AVLNode *p);
	int BalanceFactor(AVLNode *p);
	AVLNode *LLRotation(AVLNode *p);
	AVLNode *RRRotation(AVLNode *p);
	AVLNode *LRRotation(AVLNode *p);
	AVLNode *RLRotation(AVLNode *p);
	AVLNode *InPre(AVLNode *p);
	AVLNode *InSucc(AVLNode *p);
	AVLNode *Delete(AVLNode *p,int val);
	
	void PreOrder(AVLNode *p);
	void LevelOrder(AVLNode *p);
};


int AVL::NodeHeight(AVLNode *p)
{
	int hl=0,hr=0;
	
	if(p==NULL)
	return 0;
	
	if(p!=NULL && p->lchild!=NULL)
	{
		hl=p->lchild->height;
	}
		
	if(p!=NULL && p->rchild!=NULL)
	{
		hr=p->rchild->height;
	}
	
	if(hl>hr)
	return hl+1;
	else
	return hr+1;
}


int AVL::BalanceFactor(AVLNode *p)
{
	
	int hl=0,hr=0;
	
	if(p!=NULL && p->lchild!=NULL)
	{
		hl=p->lchild->height;
	}
		
	if(p!=NULL && p->rchild!=NULL)
	{
		hr=p->rchild->height;
	}
	
	return hl-hr;
	
}



AVLNode *AVL::LLRotation(AVLNode *p)
{
	
	AVLNode *B =p->lchild;
	AVLNode *Br =B->rchild;
	
	p->lchild=Br;
	
	B->rchild=p;
	
	p->height=NodeHeight(p);
	B->height=NodeHeight(B);
	
	if(p==root)
	root=B;
	
	return B;
	
}


AVLNode *AVL::RRRotation(AVLNode *p)
{
	
	AVLNode *B =p->rchild;
	AVLNode *Bl =B->lchild;
	
	p->rchild=Bl;
	
	B->lchild=p;
	
	p->height=NodeHeight(p);
	B->height=NodeHeight(B);
	
	
	if(p==root)
	root=B;
	
	return B;
	
}

AVLNode *AVL::LRRotation(AVLNode *p)
{
	
	AVLNode *B,*C, *Cl , *Cr;
	
	B=p->lchild;
	C=B->rchild;
	Cl=C->lchild;
	Cr=C->rchild;
	
	B->rchild=Cl;
	p->lchild=Cr;
	
	C->lchild=B;
	C->rchild=p;
	
	p->height=NodeHeight(p);
	C->height=NodeHeight(C);
	B->height=NodeHeight(B);	
	
	if(p==root)
	root=C;
	
	return C;
}

AVLNode *AVL::RLRotation(AVLNode *p)
{
	
	AVLNode *B,*C, *Cl , *Cr;
	
	B=p->rchild;
	C=B->lchild;
	Cl=C->lchild;
	Cr=C->rchild;
	
	p->rchild=Cl;
	B->lchild=Cr;
	
	C->lchild=p;
	C->rchild=B;
	
	p->height=NodeHeight(p);
	C->height=NodeHeight(C);
	B->height=NodeHeight(B);	
	
	if(p==root)
	root=C;
	
	return C;
	
	
}



AVLNode *AVL::RInsert(AVLNode *p,int val)
{
	
	if(p==NULL)
	{
		AVLNode *t=new AVLNode;
		t->data=val;
		t->height=1;
		t->rchild=t->lchild=NULL;
		return t;
	}
	
	
	if(val < p->data)
	p->lchild=RInsert(p->lchild,val);
	
	if(val > p->data)
	p->rchild=RInsert(p->rchild,val);
	
	
	p->height=NodeHeight(p);
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1 )
	{
		cout<<"LL"<<endl;
		return LLRotation(p);
	}
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1 )
	{
		cout<<"RR"<<endl;
		return RRRotation(p);
	}
	else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1 )
	{
		cout<<"LR"<<endl;
		return LRRotation(p);
	}
	
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1 )
	{
		cout<<"RL"<<endl;
		return RLRotation(p);
	}
	
	return p;
	
}


AVLNode *AVL::InPre(AVLNode *p)
{
	
	while(p!=NULL && p->rchild!=NULL)
	p=p->rchild;
	
	return p;
	
}


AVLNode *AVL::InSucc(AVLNode *p)
{
	
	while(p!=NULL && p->lchild!=NULL)
	p=p->lchild;
	
	return p;
	
}



AVLNode *AVL::Delete(AVLNode *p,int val)
{
	AVLNode *q;

	if(p==NULL)
	return NULL;
	
	if(p->lchild==NULL && p->rchild==NULL)
	{
		delete p;
		return NULL;
	}
	
	if(val < p->data)
	p->lchild=Delete(p->lchild,val);
	
	if(val > p->data)
	p->rchild=Delete(p->rchild,val);
	
	
	if(val==p->data)
	{
		if(NodeHeight(p->lchild) > NodeHeight(p->rchild))
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
	
	p->height=NodeHeight(p);
	//cout<<BalanceFactor(p->lchild);
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
	{
		cout<<"DelL1 LL"<<endl;
		return LLRotation(p);
	}
	
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
	{
		cout<<"DelL-1 LR"<<endl;
		return LRRotation(p);
	}
	
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==0)
	{
		cout<<"DelL0 LR"<<endl;
		return LRRotation(p);
	}
	
	if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
	{
		cout<<"DelR-1 RR"<<endl;
		return RRRotation(p);
	}
	
	if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
	{
		cout<<"DelR1 RL"<<endl;
		return RLRotation(p);
	}
	
	if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==0)
	{
		cout<<"DelR0 RR"<<endl;
		return RRRotation(p);
	}
	
	return p;
}



void AVL::PreOrder(AVLNode *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<" ";
		PreOrder(p->lchild);
		PreOrder(p->rchild);
	}
	
}


signed main()
{

	AVL avl;
	
	avl.root=avl.RInsert(avl.root,10);
	avl.RInsert(avl.root,20);
	avl.RInsert(avl.root,30);
	avl.RInsert(avl.root,25);
	avl.RInsert(avl.root,28);
	avl.RInsert(avl.root,27);
	avl.RInsert(avl.root,5);
	
	avl.Delete(avl.root,10);	
	avl.Delete(avl.root,20);
	avl.Delete(avl.root,5);
	avl.Delete(avl.root,30);
	avl.PreOrder(avl.root);


	return 0;
}

