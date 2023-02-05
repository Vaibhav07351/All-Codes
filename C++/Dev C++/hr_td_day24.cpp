#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
int i=0;
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {     
              int flag=0;   
              Node *p ,*q,*r;
              p=head;
              q=head;
              r=head;
              vector<int >arr;
              
              if(p==NULL)
              return 0;
            
              while(p!=NULL)
              { 
                  flag=0;
                  arr.push_back(p->data);
                  flag=0;
                  for(int i=0;i<arr.size()-1;i++)
                  {
                      if(arr[i]==p->data)
                      {
                          flag=1;
                          break;
                      }
                  }
                  
                  if(flag==1)
                  {		
                 // 	  cout<<i;
                      q->next=p->next;
                       p=p->next;  //if value deleted then don't increment q, let it remain there only ,otherwise q and p at same place 
                        
                  }
                  //i++;
                  else{
				  
                  q=p;
                  p=p->next;
              		}
                  
              }
            
            return r; 
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
