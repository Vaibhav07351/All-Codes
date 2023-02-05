 #include<bits/stdc++.h>
//#define int long long int

using namespace std;

class Stack 
{
	public:
  	int size=10;
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

int  pop(Stack *st)
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

int  isEmpty(Stack *st)
{
	
	if(st->Top==-1)
	return 1;
	else 
	return 0;
}

int  isFull(Stack *st)
{
	
	if(st->Top==st->size-1)
	return 1;
	else
	return 0;
	
}



void  Enqueue(Stack *st1,int val)
{
	push(st1,val);		
}

int Dequeue(Stack *st1,Stack *st2)
{
	
	if(isEmpty(st2))
	{
			
			if(isEmpty(st1))
			return -1;
			
			while(!isEmpty(st1))
			{
				push(st2,st1->f[st1->Top]);
				pop(st1);
			}
			int x=st2->Top;
			pop(st2);
			return x;
	}
	
	else
	{
		int x=st2->Top;
		pop(st2);
		return x;	
				
	}
	
}


void Display(Stack *st1,Stack *st2)
{
	int temps1=st1->Top;
	int temps2=st2->Top;
	
	if(!isEmpty(st2))
	{
			while(temps2!=-1)
			{
				cout<<st2->f[temps2]<<" ";
				temps2--;
			}
	}
	
	Stack st3;
	st3.f=new int[10];
	while(temps1!=-1)
	{
		push(&st3,st1->f[temps1]);
		temps1--;
	}
	
	
	while(st3.Top!=-1)
	{
		cout<<st3.f[st3.Top]<<" ";
		st3.Top--;
	}
	
	
}

int main()
{
	Stack st1,st2;
	st1.f=new int[10];
	st2.f=new int[10];
	
	Enqueue(&st1,5);
	Enqueue(&st1,6);
	Enqueue(&st1,7);
	Enqueue(&st1,8);
	Enqueue(&st1,9);
//	Enqueue(&st1,10);
//	Enqueue(&st1,11);
	
	Dequeue(&st1,&st2);
	Dequeue(&st1,&st2);
//	Dequeue(&st1,&st2);
//	Dequeue(&st1,&st2);
	Enqueue(&st1,22);	
		
	Display(&st1,&st2);
	
	return 0;
}

