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

void Deletion(struct Node *p,int position)         //Deletion at any position
{
	struct Node *tail;
	p=head;
	tail=p->next;
    if(position==1)                                          //Deletion of head node of linked last.
	{
	  while(p->next!=head)
	  {
	  	p=p->next;
	  }
	  p->next=tail;
	  delete head;
	  head=tail;
	}else{                                              //at any position other than beginning.
	for(int i=1;i<position;i++)
	{
		tail=p;
		p=p->next;
	}
	tail->next=p->next;
	delete p;
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
	
	cout<<"Enter position to insert : ";
	cin>>pos;
	
	Deletion(head,pos);
	
	display(head);
}
