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
		
		void preorder(){preorder(root);}
		void preorder(Node *p);
		
		void postorder(){postorder(root);}
		void postorder(Node *p);
		
		void inorder(){inorder(root);}
		void inorder(Node *p);
		
		void levelOrder(){levelOrder(root);}
		void levelOrder(Node *p);
		
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

void Tree :: preorder(struct Node *p)
{   
	if(p!=NULL)
	{   
	    cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void Tree :: postorder(struct Node *p)
{   
	if(p!=NULL)
	{   
	    postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}
}

void Tree :: inorder(struct Node *p)
{   
	if(p!=NULL)
	{   
	   
		inorder(p->lchild);
		 cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

void Tree :: levelOrder(struct Node *p)
{   Queue q(100);
	cout<<root->data<<" ";
	q.enqueue(root);
	while(!q.isEmpty())
	{
		root=q.dequeue();
		if(root->lchild)
		{
			cout<<root->lchild->data<<" ";
			q.enqueue(root->lchild);
		}
		if(root->rchild)
		{
			cout<<root->rchild->data<<" ";
			q.enqueue(root->rchild);
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
	cout<<"Pre-order"<<endl;
	t.preorder();
	
	cout<<endl;
	cout<<"Post-order"<<endl;
	t.postorder();
	
	cout<<endl;
	cout<<"in-order"<<endl;
	t.inorder();
	
	cout<<endl;
	cout<<"level-order"<<endl;
	t.levelOrder();
	
	cout<<endl;
	//cout<<"Height of binary tree is : "<<t.Height();  using this with above traversal we get wrong height so we get new program with height only.
}
