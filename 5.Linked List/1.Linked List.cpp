#include<iostream>
using namespace std;

struct Node{                          //node has two part ,one of data and second of pointer next which points the next node.
	int data;
	struct Node *next;
};


int main()
{
	struct Node *p;                 //p is the pointer variable created in stack which will allocate the momory of nodes in heap.
	
    p= new Node;                    //Node is created in heap
    
    p->data=10;                     //bascially in this step and below this we accessed the memebers 
    p->next=0;                      //zero means its the last node
    
    while(p!=0)                     //traverse through L.L.
    {
    	cout<<p->data;
    	p=p->next;
    }
	
}
