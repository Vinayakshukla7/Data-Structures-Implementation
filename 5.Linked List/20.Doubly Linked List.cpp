#include<iostream>
using namespace std;

struct Node {                           //Node Creation
    struct Node *prev;
	int data;
	struct Node *next;
};

struct Node *head=NULL;                 //globally declared,so head is passed while function calling to made this updated.

void create(struct Node *p,int n)       //creation of doubly Linked List
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


int main(){
	
	int n,in,val;
	cout<<"No.of Values to Insert : ";
	cin>>n;
	cout<<"Enter the values : ";
	create(head,n);
	display(head);

}
