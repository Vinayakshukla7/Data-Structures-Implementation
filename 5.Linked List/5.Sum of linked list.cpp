#include<iostream>
using namespace std;

struct Node{                              //node has two part ,one of data and second of pointer next which points the next node.
	int data;
	struct Node *next;
};

void Sumall(struct Node *show)            //sum of all nodes of data part.
{   
    int total=0;
	while(show!=0)                        //traverse through L.L.
    {
    	total+=show->data;
    	show=show->next;
    }
    cout<<"Sum of all nodes of linked list : "<<total;
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
{   int n;
	struct Node *p;                        //p is the pointer variable created in stack which will allocate the momory of nodes in heap.
	p=new Node;
	
	cout<<"Enter number of elements :"<<endl;
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	Create(p,n);                            //create the linked list 
	 
    Sumall(p);                           //sum of linked list 
	
}
