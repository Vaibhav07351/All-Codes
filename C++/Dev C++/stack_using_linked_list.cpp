#include<bits/stdc++.h>
using namespace std;

class Stack
{
	int num;
	Stack *next;
	
	public:
	
	void push(int n);
	void pop();
	void display();
	
};

Stack *top=NULL;

void Stack::push(int n)
{
	
	Stack *node=new Stack;
	node->num=n;
	node->next=top;
	top=node;
	cout<<"Value added to Stack is "<<n<<endl;
	
}


void Stack::pop()
{
	
	if(top==NULL)
	{	
		cout<<"Stack underflow!"<<endl;
		return;
	}
	
	Stack *temp=new Stack;
	temp=top;	
	
	cout<<"The value popped is : "<<temp->num<<endl;
	top=top->next;
	
	delete temp;
}


void Stack::display()
{
		if(top==NULL)
	{	
		cout<<"Stack underflow!"<<endl;
		return;
	}

	Stack *temp=new Stack;
	temp=top;
	
	cout<<"The values in stack are : ";	
	while(temp!=NULL)
	{
		cout<<temp->num<<"  ";
		temp=temp->next;
	}
	cout<<endl;
	delete temp;
}



int main()
{
	Stack obj;
	char c='y';
	int n;	
	int a;
	while(c=='y'||c=='Y')
	{
		cout<<"The menu for Stack operations is -> "<<endl;
		cout<<"1. Push Value to the Stack "<<endl;
		cout<<"2. pop value from the Stack"<<endl;
		cout<<"3. Display values of the Stack"<<endl;	
		
		cout<<endl<<"Please enter desired operation : ";
		cin>>n;
		cout<<endl;
		switch(n){
			
			case 1: cout<<"Enter value to be added to stack : ";
				   cin>>a;
				   obj.push(a);
				   break;
			
			case 2: obj.pop();
					break;
			
			case 3: obj.display();
			 		break;
			
			default : cout<<"Invalid value entered!"<<endl;	
					  			
		}

		cout<<endl<<"Want to repeate again? y/n : ";
		cin>>c;	
		cout<<endl;
	}
	
	
	return 0;
}


