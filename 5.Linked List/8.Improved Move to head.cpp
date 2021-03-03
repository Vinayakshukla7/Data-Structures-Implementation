#include<iostream>
using namespace std;

struct Node{                              //node has two part ,one of data and second of pointer next which points the next node.
	int data;
	struct Node *next;
};

void Display(struct Node *show)           //if we are calling this then this is not working 
{
	while(show!=0)                        //traverse through L.L.
    {
    	cout<<show->data<<" --> ";
    	show=show->next;
    }
}

void Linearsearch(struct Node *p,int x)            //Search element from linked list   
{
	struct Node *tail=NULL;
	struct Node *heads;
	heads=p;
	while(p!=0)                                            //traverse through L.L.
    {
    	if(p->data == x)                         //under this searched element is moved to first ,so that next time the search is effecient 
    	{
    		tail->next=p->next;
    		p->next=heads;
    		heads=p;
    	}
    	tail=p;
    	p=p->next;
    }
    cout<<"Recently Searched element will at first node so the updated linked list is : "<<endl;
    while(heads!=0)                          //it just to check that the recently searched element come at first place 
    {
    	cout<<heads->data<<" --> ";
    	heads=heads->next;
    }
    
}


void Create(struct Node *p,int n)                  
{
	struct Node *temp,*head,*newnode;            //head points the first node of linked list ,newnode is created whenever the data is provided and temp is to traverse through the LL.
	temp=head=p;
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
{   int n,x;
	struct Node *p;                             //p is the pointer variable created in stack which will allocate the momory of nodes in heap.
	p=new Node;

	cout<<"Enter number of elements :"<<endl;
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	Create(p,n);                                  //create the linked list 
	
	cout<<"Enter the value to search : "<<endl;
	cin>>x;
	
    Linearsearch(p,x);                             //will find max element in linked list 
	
}
