#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Node
{	
	public:
		
	char data;
	Node *next;
	
};

class Stack
{

	public:
	Node *Top;	
	Stack()
	{
		Top=NULL;
	}
	
	void push(int x);
	char pop();
	int isEmpty();

	
};


void Stack::push(int val)
{
	Node *t=new Node;
	
	if(t==NULL)
	return;
	
	t->data=val;
	t->next=Top;
	Top=t;
	
}

char Stack::pop()
{
	char x;
	
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



int Stack::isEmpty()
{
	
	if(Top==NULL)
	return 1;
	else
	return 0;
	
}

int preced(char x)
{
	if(x=='^')
	return 3;
	
	if(x=='*' || x=='/' )
	return 2;
	
	if(x=='+' || x=='-')
	return 1;
}




signed main()
{
	Stack st;
	
	string infix;
	string postfix;
	
	cout<<"Enter Infix Expression : ";
	cin>>infix;
	
	cout<<endl;
	
	for(int i=0;i<infix.length();i++)
	{
		
		if(infix[i]!='+' && infix[i]!='-' && infix[i]!='/' && infix[i]!='*' && infix[i]!='^' && infix[i]!=')' && infix[i]!='('  )
		{		
		
			postfix+=infix[i];
		//	continue;
		}
		
		else if(infix[i]=='(')
		st.push(infix[i]);
		
		else if(infix[i]=='^')
		st.push(infix[i]);
			
		else if(infix[i]==')' )
		{
				while(st.Top!=NULL && st.Top->data!='(')
				{
					postfix+=st.Top->data;
					st.pop();
				}			
				
				st.pop();		
	
		}
		
	
		else
		{
			if(st.isEmpty()==1)
			st.push(infix[i]);
			
			else
			{
				while( (st.Top!=NULL && st.Top->data!='(' ) && preced(infix[i]) <= preced(st.Top->data))
				{
					postfix+=st.Top->data;
					st.pop();
				}			
				st.push(infix[i]);
			}
					
		}
		
		
		cout<<postfix<<endl;
	}

	while(st.isEmpty()!=1)
	{
		postfix+=st.Top->data;
		st.pop();
	}

	
	cout<<postfix;


	return 0;
}

