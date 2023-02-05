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

	public:
	Node *Top;	
	Stack()
	{
		Top=NULL;
	}
	
	void push(int x);
	int pop();
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



int Stack::isEmpty()
{
	
	if(Top==NULL)
	return 1;
	else
	return 0;
	
}



signed main()
{
	Stack st;
	
	string postfix;
	
	cout<<"Enter Postfix expression : ";
	
	cin>>postfix;
	
	cout<<endl;
	
	for(int i=0;i<postfix.length();i++)
	{
		
		if(postfix[i]!='+' && postfix[i]!='-' &&  postfix[i]!='/' &&  postfix[i]!='*' && postfix[i]!='^' )
		st.push(postfix[i] -'0');
		
	
		else
		{
			int a=st.Top->data;
			st.pop();
			
			int b= st.Top->data;
			st.pop();
			switch(postfix[i])
			{
				
				case '+':		
					st.push(a+b);
					break;
				case '-':		
					st.push(b-a);
					break;
				case '/':		
					st.push(b/a);
					break;
				case '*':		
					st.push(a*b);
					break;
				case '^':		
					st.push(b^a);
					break;		
			}
			
			
		}
	
	
		//		cout<<st.Top->data<<endl;	
	}


	cout<<st.Top->data;


	return 0;
}

