class Node{
	public:
	Node *lchild;
	Node *rchild;
	int data;
};

class Queue{
	private:
		int front;
		int rear;
		int size;
		Node **Q;
		
	public:
		Queue(){
			rear=front=-1;
			size=10;
			Q=new Node*[size];
		}
		Queue(int size){
			rear=front=-1;
			this->size=size;
			Q=new Node*[this->size];
		}
		void enqueue(Node *x);
		Node *dequeue();
		int isEmpty();
};

void Queue :: enqueue(Node *x){
	if(rear==size-1)
	{
		//cout<<"Queue is Full "<<endl;
	}else{
		rear++;
		Q[rear]=x;
	}
}

Node* Queue :: dequeue(){
	Node* x=NULL;
	if(rear==front)
	{
		//cout<<"Queue is Empty"<<endl;
	}else{
		x = Q[front+1];
		front++;
	}
	return x;
}

int Queue::isEmpty(){
	return rear==front;
}


