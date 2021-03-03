#include<iostream>
using namespace std;

struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
};

void create(Queue *q  ,int size)
{
	q->front=q->rear=-1;
	q->size=size;
	q->Q=new int[q->size];
}

void enqueueBYrear(Queue *q,int value)
{
	if(q->rear == q->size-1)
	{
		cout<<"Overflow : "<<endl;
	}else{
		q->rear++;
		q->Q[q->rear]=value;
	}
}

void enqueueBYfront(Queue *q,int value)
{
	if(q->front < 0)
	{
		cout<<"Cannot be added from front : "<<endl;
	}else{
		
		q->Q[q->front]=value;
		q->front--;
	}
}


void dequeueBYfront(Queue *q)
{    
    int x;
	if(q->rear == q->front)
	{
		cout<<"Underflow"<<endl;
	}else{
		q->front++;
		x=q->Q[q->front];
	}
}
void dequeueBYrear(Queue *q)
{    
    int x;
	if(q->rear == q->front)
	{
		cout<<"Underflow"<<endl;
	}else{
		x=q->Q[q->rear];
		q->rear--;
	}
}

void display(struct Queue q)
{   
	for(int i=q.front+1;i<=q.rear;i++)
	{
		cout<<q.Q[i]<<endl;
	}
}
int main(){
	struct Queue q;
	
	cout<<"Enter size of Queue : ";
	cin>>q.size;
	
    create(&q,q.size);
    
    cout<<"intially the queue "<<endl;
    enqueueBYrear(&q,200);                           //nomral insertion in queue i.e...from rear end 
    enqueueBYrear(&q,300);   
    enqueueBYrear(&q,350);
    display(q);
	
	cout<<"after removal from rear end "<<endl;
	dequeueBYrear(&q);                               //deletion of queue from rear end.
	display(q);
	
	cout<<"removal from front end "<<endl;
	dequeueBYfront(&q);                             //deletion of queue from front end i.e.. normally.
	display(q);
	
	
	cout<<"adding from front : "<<endl;
	enqueueBYfront(&q,400);                        //insertion in queue from front end .
	
	display(q);
}
