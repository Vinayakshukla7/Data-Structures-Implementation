#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *top = NULL;        

void Push(int val)                                        //add node at the beginning.
{
	struct Node *newnode;
	newnode = new Node;
	if(newnode == NULL)                                    //means heap is full no node is created , if heap condition is true.
	{
		cout<<"Overflow" ;
	}else{
		newnode->data=val;
		newnode->next = top;
		top = newnode ;
	}
}

void Pop(struct Node *p)                                  //remove node from the beginning.                     
{
	if(top==NULL)
	{
		cout<<"UnderFlow";
	}else{
	    p=top;
	    top=top->next;
	    delete p;
	}
	
}
void Display(struct Node *p)
{
	p=top;
	while(p)
	{   
	    cout<<p->data<<endl;
		p=p->next;
	}
}
int main(){
	
	Push(10);                                //push value to the stack
	Push(20);
	Push(30);
	Push(40);
	
	Pop(top);                                 //pop the top value;            //use simply Pop() and use void Pop() while delcaring but made struct Node *p inside it .
	
	cout<<"Stack Created by linked list : "<<endl;
	Display(top);                              //display the stack
}
