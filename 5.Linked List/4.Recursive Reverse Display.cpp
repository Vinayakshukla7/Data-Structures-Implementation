#include<iostream>
using namespace std;

struct Node{                              //node has two part ,one of data and second of pointer next which points the next node.
	int data;
	struct Node *next;
};

void Display(struct Node *show)          //normal display through recursion
{
	if(show!=0)                        
    {
    	cout<<show->data<<" --> ";
    	Display(show->next);
    }
}

void ReverseDisplay(struct Node *show)     //reverse display through recursion.
{
	if(show!=0)                        
    {  
	    ReverseDisplay(show->next);
    	cout<<show->data<<" --> ";
    }
}

void Create(struct Node *p)                  
{
	struct Node *temp,*head,*newnode;            //head points the first node of linked list ,newnode is created whenever the data is provided and temp is to traverse through the LL.
	temp=head=p;
	cin>>head->data;
	head->next=0;
	for(int i=0;i<3;i++)
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
	struct Node *p;                        //p is the pointer variable created in stack which will allocate the momory of nodes in heap.
	p=new Node;
	
	Create(p);                            //create the linked list 
	 
    Display(p);                           //display the linked list 
    
    cout<<endl;
    
    cout<<"Displayed Reversed Linked list : ";
    
    ReverseDisplay(p);                    //Reverse linked list
    
	
}
