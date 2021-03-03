#include<bits/stdc++.h>
using namespace std;

struct Node {                           //Node Creation
	int data;
	struct Node *next;
};

struct Node *first=NULL;
struct Node *second=NULL;   
struct Node *third=NULL;        

void display(struct Node *p)           //node displayed
{
	while(p)
	{   
	    cout<<p->data<<"-->";
		p=p->next;
	}
}
void create(struct Node *p,int n)       //creation of first Linked List
{  
   struct Node *temp,*newnode;
   first= new Node;
   temp=first;
   cin>>first->data;
   first->next=NULL;
   for(int i=0;i<n-1;i++)
   {
   	newnode = new Node;
   	cin>>newnode->data;
   	temp->next=newnode;
   	newnode->next=NULL;
   	temp=newnode;
   }
}

void create2(struct Node *p,int m)       //creation of first Linked List
{  
   struct Node *temp,*newnode;
   second= new Node;
   temp=second;
   cin>>second->data;
   second->next=NULL;
   for(int i=0;i<m-1;i++)
   {
   	newnode = new Node;
   	cin>>newnode->data;
   	temp->next=newnode;
   	newnode->next=NULL;
   	temp=newnode;
   }
}

void Merging(struct Node *p ,struct Node *q)            //main logic of merging
{
struct Node *last;
if(first->data < second->data)
{
	third=last=first;
	first=first->next;
	last->next=NULL;
}else{
	third=last=second;
	second=second->next;
	last->next=NULL;
}

while(first != NULL && second != NULL)
{
if(first->data < second->data)
{
	last->next=first;
	last=first;
	last->next=NULL;
	first=first->next;
}
else
{
	last->next=second;
	last=second;
	last->next=NULL;
	second=second->next;
}
}
if(first!=NULL)
{
	last->next=first;
}else{
	last->next=second;
}
}


int main(){
	
	int n,m;
	cout<<"No.of Values to Insert : ";
	cin>>n;
	cout<<"Enter the values : ";
	create(first,n);
	display(first);
	cout<<"No.of Values to Insert in second list : ";
	cin>>m;
	create2(second,m);
	display(second);
	cout<<endl;
	
    Merging(first,second);
    
	display(third);
}
