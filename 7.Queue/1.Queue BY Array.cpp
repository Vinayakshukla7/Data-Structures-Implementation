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

void enqueue(Queue *q,int value)
{
	if(q->rear == q->size-1)
	{
		cout<<"Overflow : "<<endl;
	}else{
		q->rear++;
		q->Q[q->rear]=value;
	}
}

void dequeue(Queue *q)
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
    
    enqueue(&q,200);                           //insertion in queue
    enqueue(&q,300);  
    enqueue(&q,400);  
	
	dequeue(&q);                               //deletion of queue
	
	display(q);
}
