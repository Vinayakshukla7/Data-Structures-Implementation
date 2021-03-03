#include<iostream>
using namespace std;

struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
};

void create(struct Queue *q,int size)                               //creation of circular queue
{
	q->size=size;
	q->front=q->rear=0;                                     //initialized to zero.
	q->Q=new int[q->size];
}

void enqueue(struct Queue *q,int value)                         //insertion in circular queue
{
	if((q->rear+1)%q->size==q->front)                   
	{
		cout<<"Overflow"<<endl;
	}else{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=value;
	}
}

int dequeue(struct Queue *q)                                //deletion from the queue.
{   int x;
	if(q->rear=q->front)
	{
		cout<<"Underflow"<<endl;
	}else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

void display(struct Queue q)
{
	int i = q.front+1;
	do{
		cout<<q.Q[i]<<endl;
		i=(i+1)%q.size;
	}while(i!=(q.rear+1)%q.size);
}

int main(){
	struct Queue q;
	int n;
	cout<<"Size of Queue : ";
	cin>>n;
	
	create(&q,n);
	
	enqueue(&q,100);
	enqueue(&q,200);
	enqueue(&q,300);
	enqueue(&q,400);
	
	display(q);
	cout<<endl;
	
	cout<<"Dequeued Element : "<<dequeue(&q);
	
	
	
}
