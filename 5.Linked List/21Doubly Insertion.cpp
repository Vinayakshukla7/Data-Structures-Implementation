#include<iostream>
using namespace std;

struct Node {                           //Node Creation
    struct Node *prev;
	int data;
	struct Node *next;
};

struct Node *head=NULL;                 //globally declared,so head is passed while function calling to made this updated.

void create(struct Node *p,int n)       //creation of Linked List
{
   struct Node *newnode;
   head	= new Node;
   p=head;
   cin>>head->data;
   head->prev=NULL;
   head->next=NULL;
   for(int i=0;i<n-1;i++)
   {
   	newnode = new Node;
   	cin>>newnode->data;
   	newnode->prev=p;
   	p->next=newnode;
   	newnode->next=NULL;
   	p=newnode;
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

void insert(struct Node *p,int index,int value)                 //Insertion of Node.
{    
    struct Node *newnode,*tail;
    newnode = new Node;
    newnode->data = value;
    p=head;
    if(index == 1)                                            //insertion at the beginning 
    {
    newnode->prev=NULL;
    head->prev=newnode;
    newnode->next=head;
	head=newnode;	
    }else{                                                   //insertion at any place .
	for(int i=1;i<index-1;i++)
	{
	    p=p->next;
	}
	tail=p->next;
	newnode->prev=p;
	newnode->next=tail;
	p->next=newnode;
	if(tail!=NULL)
	{
	tail->prev=newnode;
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
	
	cout<<"Enter Position to insert : ";
	cin>>in;
	cout<<"Enter Value to insert : ";
	cin>>val;
	
	insert(head,in,val);
	
	display(head);
}
