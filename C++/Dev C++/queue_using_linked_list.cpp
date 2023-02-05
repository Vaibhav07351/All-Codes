#include<bits/stdc++.h>
using namespace std;

class Queue
{
	
	int val;
	Queue *next;
	
	public:
		
	void enqueue(int n);
	void del();
	void display();
	
};

Queue *front=NULL;
Queue *rear=NULL;

void Queue::enqueue(int n)
{
	
	Queue *node=new Queue;
	
	node->val=n;
	node->next=NULL;

	if(rear==NULL)
	{		
		front = rear = node;
		return;
	}
	
	else
	{
		rear->next=node;
		rear=node;
	}
	
	
}

void Queue::del()
{
	
	Queue *node=new Queue;
	
	if(front==NULL)
	{	
		cout<<"Queue underflow!"<<endl;
		return;
	}
	
	
	if(front ==rear)
	{	
		cout<<"Value deleted is :"<<front->val<<endl;
		front=rear=NULL;
		return;
	}
	
	cout<<"Value deleted is :"<<front->val<<endl;
	
	front=front->next;
	
}


void Queue::display()
{
	
	Queue *temp=new Queue;
	temp=front;
	
	if(front ==NULL)
	{
		cout<<"Queue underflow!"<<endl;
		return ;
	}
	
	cout<<"The values in Queue : ";
	
	while(temp!=NULL)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	delete temp;
	
	cout<<endl;
}




int main()
{
	Queue obj;
	char c='y';
	int n;	
	int a;
	while(c=='y'||c=='Y')
	{
		cout<<"The menu for Queue operations is -> "<<endl;
		cout<<"1. Push Value to the Queue "<<endl;
		cout<<"2. pop value from the Queue"<<endl;
		cout<<"3. Display values of the Queue"<<endl;	
		
		cout<<endl<<"Please enter desired operation : ";
		cin>>n;
		cout<<endl;
		switch(n){
			
			case 1: cout<<"Enter value to be added to Queue : ";
				   cin>>a;
				   obj.enqueue(a);
				   break;
			
			case 2: obj.del();
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


