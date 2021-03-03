#include<iostream>
using namespace std;

struct Node {                           //Node Creation
    struct Node *prev;
	int data;
	struct Node *next;
};

struct Node *head=NULL;                 //globally declared

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

void DeleteNode(struct Node *p,int index)                 //deletion of Node.
{    
    struct Node *tail=NULL,*q;
	if(index==1)                                           //deletion of first node.
	{
		p=head;
		head=head->next;
		head->prev=NULL;
		delete p;
	}
	else{                                                  //deletion of specified node.
	for(int i=0;i<index-1;i++)
	{
	    tail=p;
	    p=p->next;
	}
	tail->next=p->next;
	q=p;
	p=p->next;
	if(p)
	{
		p->prev=tail;
	}
	delete q;
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
	
	cout<<"Enter Position to delete : ";
	cin>>in;
	
	DeleteNode(head,in);
	
	display(head);
}
