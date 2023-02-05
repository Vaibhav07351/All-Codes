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
        head=NULL;
        B[i]=NULL;
    }
    else
    {   
       B[i]=head->next;

        val=head->data;
    }

    return val;
}

void RadixSort(int A[], int n)
{
    int max;
    max=A[0];

    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }

    int count=0;
    while(max!=0)
    {
        count++;
        max/=10;
    }
   // cout<<count<<endl;

    Node *B[10]={NULL}; 

    for(int i=0;i<count;i++)
    {     
        for(int j=0;j<n;j++)
        {   
            int num=(A[j])/(pow(10,i) );
            int index= (num)%10;
            cout<<index<<" ";
            B[index]= Insert(B[index],A[j]);
        }
        cout<<endl;

        int k=0;
        for(int j=0;j<10;j++)    
        {
            while(B[j]!=NULL)
            {        
                A[k++]=Delete(B[j],B,j);    
            }
        }

         for (int i = 0; i < n; i++)
        cout << A[i] << " ";
        cout<<endl;

    }


}

signed main()
{
    int n=12;
    int A[12] = {237,146,259,348,152,163,235,48,36,62,5,2};
    
    RadixSort(A, n);

    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
