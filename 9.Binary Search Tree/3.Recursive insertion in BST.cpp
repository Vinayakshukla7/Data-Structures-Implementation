#include<iostream>
using namespace std;

struct node{
	struct node* lchild;
	int data;
	struct node* rchild;
};
struct node *root=NULL;

struct node *rinsert(struct node *p,int value)                           //recursive insertion.
{ 
    struct node *t=NULL;
      
    if(p==NULL)                                        
	{   
	    t=new node;
		t->data=value;
		t->rchild=t->lchild=NULL;
		return t;
	}
	if(value < p->data)
	{
		p->lchild=rinsert(p->lchild,value);
	}else if(value > p->data)
	{
		p->rchild=rinsert(p->rchild,value);
	}
}

void Inorder(struct node *p)
{
	  if(p)
	  {
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
      }
}

int main(){

root=rinsert(root,400);
rinsert(root,500);
rinsert(root,600);

Inorder(root);
	
}
