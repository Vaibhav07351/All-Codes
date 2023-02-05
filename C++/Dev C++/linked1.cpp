#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node *next;
}*first=NULL;
void create(int A[],int n)
{
int i;
Node *t,*last;
first=(struct Node *)malloc(sizeof(struct Node));
first->data=A[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=new Node;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}
void Display( Node *p)
{
while(p!=NULL)
{
cout<<p->data;
p=p->next;
}
}
void RDisplay(Node *p)
{
if(p!=NULL)
{
RDisplay(p->next);
cout<<p->data;
}
}

int count(Node *p)
{
	if(p!=NULL)
	return count(p->next)+1 ;
		
}

int main()
{
struct Node *temp;
int A[]={3,5,7,10,25,8,32,2};
create(A,8);
Display(first);
cout<<endl<<count(first);
return 0;
}
