#include<iostream>
#include"classHeader.h"           
using namespace std;

class Tree{
	Node *root;
	
	public:
		Tree(){
			root=NULL;
		}
		void createTree();
		
		int count(){ count(root);}
		int count(Node *p);
};

void Tree::createTree(){
	Node *p,*t;
	int x;
	Queue q(100);
	
	cout<<"Enter Root Element ";
	cin>>x;
	
	root=new Node;
	root->data=x;
	root->lchild=root->rchild=NULL;
	
	q.enqueue(root);
	while(!q.isEmpty())
	{
		p=q.dequeue();
		cout<<"Enter left child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			t= new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
		}
		cout<<"Enter rigth child of "<<p->data<<":";
		cin>>x;
		if(x!=-1){
			t= new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}
		
		
		
	}
}

int Tree :: count(struct Node *p)
{
	int x,y;
	if(p!=NULL)
	{
		x=count(p->lchild);
		y=count(p->rchild);
		
		return x+y+1;
	}
	return 0;
	
}
int main(){
	Tree t;
	t.createTree();
	
	
	cout<<endl;
	cout<<"Number of nodes in Binary Tree : "<<t.count();  
}
