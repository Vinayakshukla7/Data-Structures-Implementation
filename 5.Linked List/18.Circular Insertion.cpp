#include<iostream>
using namespace std;

struct Node{                           //Node structure
	int data;
	struct Node *next;
};

struct Node *head=NULL;                //global declaration of head

void create(struct Node *p,int n)       //creation of circular linked list
{
	struct Node *newnode;
	head = new Node;
	p=head;
	cin>>head->data;
	head->next=head;                 //change 2
    for(int i=0;i<n-1;i++)
	{	
	newnode = new Node;
	cin>>newnode->data;
	newnode->next=head;              //NULL is replace by head if we compare it with singly linked list i.e..change 1
	p->next = newnode;
	p=newnode;
}
}

void Insertion(struct Node *p,int value,int position)         //Insertion at any position
{
	struct Node *newnode,*tail;
	p=head;
    if(position==1)                                          //insertion at the beginning of linked last.
	{
	  newnode = new Node;
	  newnode->data=value;
	  newnode->next=head;
	
	  while(p->next!=head)
	  {
	  	p=p->next;
	  }
	  p->next=newnode;
	  head=newnode;
	}else{                                              //at any position other than beginning
	for(int i=1;i<position;i++)
	{
		tail=p;
		p=p->next;
	}
	newnode= new Node;
	newnode->data=value;
	newnode->next=p;
	tail->next=newnode;
}
}

void display(struct Node *p)           //circular linked display
{
 do{
 	cout<<p->data<<"-->";
 	p=p->next;
   }while(p!=head);
}
int main(){
	
	int n,pos,val;
	cout<<"No.of Values to Insert : ";
	cin>>n;
	cout<<"Enter the values : ";
	create(head,n);
	display(head);
	cout<<endl;
	cout<<"Enter value to insert : ";
	cin>>val;
	cout<<"Enter position to insert : ";
	cin>>pos;
	Insertion(head,val,pos);
	
	display(head);
}
