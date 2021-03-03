#include<iostream>
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

void DeleteNode(struct Node *p,int index)                 //deletion of Node.
{    
    struct Node *tail=NULL;
	if(index==1)                                           //deletion of first node.
	{
		p=head;
		head=head->next;
		delete p;
	}
	else{                                                  //deletion of specified node.
	for(int i=0;i<index-1;i++)
	{
	    tail=p;
	    p=p->next;
	}
	tail->next=p->next;
	delete p;
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
	
	DeleteNode(head,in);
	
	display(head);
}
