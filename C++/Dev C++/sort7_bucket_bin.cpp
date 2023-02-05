#include <bits/stdc++.h>
using namespace std;
//#define int long long int
class Node
{
	public:
	
	int data;
	Node *next;
		
};

Node* Insert(Node *head,int val)
{
    Node *t=new Node;
    t->data=val;
    t->next=NULL;

    if(head==NULL)
    {
        head=t;
    }
    else
    {
        Node *p=head;
        while(p->next!=NULL)
        p=p->next;

        p->next=t;
    }

    return head;
}

int Delete(Node *head,Node *B[],int i)
{   
    int val=0;
  
    if(head->next==NULL)
    {   
        val=head->data;
        B[i]=NULL;
    }
    
    else
    {   
        Node *p=head;
        while(p->next->next!=NULL)
        p=p->next;

        val=p->next->data;

        p->next=NULL;
    }

    return val;
}

void BucketSort(int A[], int n)
{
    int max;
    max=A[0];

    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }

    Node *B[max+1]={NULL}; 

    for(int i=0;i<n;i++)
    {
       B[A[i]]= Insert(B[A[i]],A[i]);
    }

    int k=0;
    for(int i=0;i<max+1;i++)    
    {
        while(B[i]!=NULL)
        {        
            A[k++]=Delete(B[i],B,i);    
        }
    }
}

signed main()
{
    int n=10;
    int A[10] = {6,8,3,10,15,6,9,12,6,3};
    
    BucketSort(A, n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
