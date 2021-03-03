#include<iostream>
using namespace std;

struct Node{                              //node has two part ,one of data and second of pointer next which points the next node.
	int data;
	struct Node *next;
};

struct Node *head=NULL;                 //declared globally

void Display(struct Node *dis)
{
	while(dis!=0)                        //traverse through L.L.
    {
    	cout<<dis->data<<" --> ";
    	dis=dis->next;
    }
}

void InsertAtFirst(struct Node * ,int value)            //this will insert the value at first place .
{  
	struct Node *add= new Node;
	add->data=value;
	add->next=head;
	head=add;	
}

void Create(struct Node *show,int n)                  
{
	struct Node *temp,*newnode;            //head points the first node of linked list ,newnode is created whenever the data is provided and temp is to traverse through the LL.
	temp=head=show;
	cin>>head->data;
	head->next=0;
	for(int i=0;i<n-1;i++)
	{  
	    newnode = new Node;
	    cin>>newnode->data;
	    newnode->next=0;
	    temp->next=newnode;
	    temp=newnode;
	}
}


int main()
{   
    int n,x;
	struct Node *p;                        //p is the pointer variable created in stack which will allocate the momory of nodes in heap.
	p=new Node;
	
	cout<<"Enter number of elements :"<<endl;
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	
	Create(p,n);                            //create the linked list 
	
	cout<<"Value to insert at first place ; ";
	cin>>x;
	
	InsertAtFirst(p,x);

    Display(head);                        //display the linked list 
   
	
}
