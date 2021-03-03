#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *front=NULL;
struct Node *rear=NULL;

void enqueue(int val)
{
	struct Node *newnode= new Node;
	
    if(newnode==NULL)
    {
    	cout<<"overflow"<<endl;
    }else{
    	newnode->data=val;
    	newnode->next=NULL;
    	
    	if(front==NULL)
    	{
    		front=rear=newnode;
    	}else{
    		rear->next=newnode;
    		rear=newnode;
    	}
    }
}

int dequeue()
{   int x;
	struct Node *p;
	
	if(front==NULL)
	{
		cout<<"Underflow"<<endl;
	}else{
		p=front;
		front=front->next;
		x=p->data;
		delete p;
	}
	
	return x;
	
}

void display(){
   struct Node *p;
   p=front;
   
   while(p!=NULL)
   {
   	cout<<p->data<<endl;
   	p=p->next;
   }
}

int main(){
	
	enqueue(10);                            //push value into queue
	enqueue(20);
	enqueue(30);
	enqueue(40);
	
	display();                              //will display the queue
	
	cout<<"First pop out is : "<<dequeue();    //accd to FIFO it pop element from front
}
