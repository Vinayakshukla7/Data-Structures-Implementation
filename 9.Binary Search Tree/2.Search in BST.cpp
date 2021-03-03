#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node *root=NULL;

void create(int values)
{
	struct node *p,*tail=NULL,*t;
	t=root;
	if(root==NULL)                                        //creation has this condtion extra than insertion ,else other part of code is same.
	{   
	    p=new node;
		p->data=values;
		p->rchild=p->lchild=NULL;
		root=p;
	}else{
		while(t!=NULL)
		{
			tail=t;
			if(values<t->data)
			{
				t=t->lchild;
			}else if(values>t->data)
			{
				t=t->rchild;
			}
		}
	p=new node;
	p->data=values;
	p->lchild=p->rchild=NULL;
	if(p->data<tail->data)
	{
		tail->lchild=p;
	}else{
		tail->rchild=p;
	}
	}

}

int Search(int value)
{
    struct node *t;
    t=root;
    while(t!=NULL)
    {
    	if(value==t->data)
    	{
    		return 1;
    	}else if(value<t->data)
    	{
    		t=t->lchild;
    	}else{
    		t=t->rchild;
    	}
    }
    return 0;
}

int main(){
	int temp;
	int values;
	
	cout<<"Enter Value of root Node : ";
	cin>>values;
	create(values);                                                             //creation by insertion logic .
	create(100);
	create(200);
	create(50);
	create(120);
	
	temp=Search(100);
	if(temp)
	{
		cout<<"Found ";
	}else{
		cout<<"Not Found ";
	}
}
