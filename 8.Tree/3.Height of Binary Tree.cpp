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
		
		int Height(){return Height(root);}
		int Height(Node *root);
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

int Tree :: Height(struct Node *root)
{
	int x=0,y=0;
	
	if(root==0)
	{
		return 0;
	}
	x=Height(root->lchild);
	y=Height(root->rchild);
	
	if(x>y)
	{
		return x+1;
	}else{
		return y+1;
	}
}
int main(){
	Tree t;
	t.createTree();
	
	
	cout<<endl;
	cout<<"Height of binary tree is : "<<t.Height();  
}
