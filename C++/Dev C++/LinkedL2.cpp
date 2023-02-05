#include<bits/stdc++.h>
#define int long long int
using namespace std;

struct Node
{
	public:
	
	string name;
	string author;
	Node *next;
		
};
Node *first=NULL;


void Insert(int pos,string a,string b)
{
		
		if(pos<0 )
		return;
		
		Node *t=new Node;
		t->name=a;
		t->author=b;
		
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



void Display(Node *first)
{	
	Node *p=first;
	
	while(p!=NULL)
	{
		cout<<p->name<<" was britten by "<<p->author<<endl;
		p=p->next;
	}
	
}



signed main()
{
	int n=3;
	string a,b;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Book Name: ";
		getline(cin,a);
		
		cout<<"Enter the Book Author: ";
		getline(cin,b);
		Insert(i,a,b);   //Creates a linked list by first sending 0th index
	}
	
	
	Display(first);

		
	return 0;
}


