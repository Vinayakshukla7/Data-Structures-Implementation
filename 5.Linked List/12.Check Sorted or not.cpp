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

bool Check(struct Node *p)                 //Checking of Node.
{    
    int min=INT_MIN;
    while(p!=NULL)
    {
    	if(p->data < min)                    //the data in upcoming node is less than the previous one than it is not sorted
    	{
    		return false;
    	}else{                              
    		min=p->data;
    		p=p->next;
    	}
    }
    return true;
}
int main(){
	
	int n,in,val;
	cout<<"No.of Values to Insert : ";
	cin>>n;
	cout<<"Enter the values : ";
	create(head,n);
	display(head);
	
	cout<<endl;
	
	if(Check(head))
	{
		cout<<"Sorted";
	}else{
		cout<<"Not Sorted";
	}
	
}
