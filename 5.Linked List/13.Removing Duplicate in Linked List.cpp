#include<bits/stdc++.h>
using namespace std;

struct Node {                           //Node Creation
	int data;
	struct Node *next;
};

struct Node *head=NULL;                 //globally declared

void create(struct Node *p,int n)       //creation of Linked List
{
   struct Node *temp,*newnode;
   head	= new Node;
   temp=head;
   cin>>head->data;
   head->next=NULL;
   for(int i=0;i<n-1;i++)
   {
   	newnode = new Node;
   	cin>>newnode->data;
   	temp->next=newnode;
   	newnode->next=NULL;
   	temp=newnode;
   }
}

void display(struct Node *p)           //node displayed
{
	while(p)
	{   
	    cout<<p->data<<"-->";
		p=p->next;
	}
}

void DeleteDuplicate(struct Node *p)                 //removing the duplicate element in sorted linked list.
{    
    struct Node *tail;
    tail=head;
    p=head->next;
    while(p!=NULL)
    {
    	if(p->data!=tail->data)
    	{
    		tail=p;
    		p=p->next;
    	}else{
    		tail->next=p->next;
    		delete p;
    		p=tail->next;
    		
    	}
    }
}
int main(){
	
	int n,in,val;
	cout<<"No.of Values to Insert : ";
	cin>>n;
	cout<<"Enter the values : ";
	create(head,n);
	display(head);
	
	cout<<endl;
	
    DeleteDuplicate(head);
	display(head);
}
