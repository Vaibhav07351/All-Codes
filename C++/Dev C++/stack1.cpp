#include<bits/stdc++.h>
//#define int long long int

using namespace std;

class Stack 
{
	public:
  	int size;
	int Top=-1;
	int *f;
	

};


		
void push(Stack *st,int val)
{
	
	if(st->Top==st->size-1)
	return ;
	
	else
	{
		st->Top++;	 
		st->f[st->Top]=val;
		
	}
	
}

int pop(Stack *st)
{
	int x=-1;
	
	if(st->Top==-1)
	return x;
	
	else
	{
		x=st->f[st->Top];
		st->Top--;
		
	}
	
	return x;
}

int Peek(Stack *st,int pos)
{
	int npos=st->Top-pos+1;
	
	if(npos<0 || npos>(st->Top))	
	return -1;
	
	
	int val;
	
	val=st->f[st->Top-pos+1];
	
	return val;
	
}


int isEmpty(Stack *st)
{
	
	if(st->Top==-1)
	return 1;
	else 
	return 0;
}

int isFull(Stack *st)
{
	
	if(st->Top==st->size-1)
	return 1;
	else
	return 0;
	
}

void Display(Stack *st)
{
	int temp=st->Top;
	while(temp!=-1)
	{
		cout<<st->f[temp]<<" ";
		temp--;
	}
}



int main()
{
	
	Stack st;
	st.size=10;

	st.f= new int[st.size];
	
	push(&st,5);
	push(&st,6);
	push(&st,7);
	Display(&st);
	cout<<endl<<Peek(&st,2);
	cout<<endl<<Peek(&st,5);
	cout<<endl<<Peek(&st,6);
	cout<<endl<<Peek(&st,7);
	cout<<endl<<isEmpty(&st);
	pop(&st);
	cout<<endl;
	Display(&st);
//	pop(&st);
//	cout<<endl;
//	Display(&st);
//	pop(&st);
//	pop(&st);
//	cout<<endl;
//	Display(&st);
//	pop(&st);
//	cout<<endl;
//	Display(&st);
//	pop(&st);
//	cout<<endl;
//	Display(&st);
//	
//	cout<<endl<<isEmpty(&st);
	cout<<endl<<isFull(&st);
	push(&st,11);
	push(&st,12);
	push(&st,13);
	push(&st,14);
	push(&st,15);
	push(&st,16);
	cout<<endl;
	Display(&st);	
	
	cout<<endl<<isFull(&st);
	
	return 0;
}

