#include<iostream>                                                          // comments after line represents changes in AVL which is not there is BST recusive insertion.
using namespace std;

struct node{
	struct node* lchild;
	int data;
	struct node* rchild;
	
	int height;                                                          //height of tree
};
struct node *root=NULL;

int NodeHeight(struct node *p)                                            //calculate node of height
{
	int lh,rh;
	lh= p && p->lchild ? p->lchild->height:0;
	rh= p && p->rchild ? p->rchild->height:0;
	
	return lh>rh?lh+1:rh+1;
}

int bf(struct node *p)                                                 //calculate the balancing factor .
{
	int lh,rh;
	lh= p && p->lchild ? p->lchild->height:0;
	rh= p && p->rchild ? p->rchild->height:0;
	
	return lh-rh;
}

struct node *LL(struct node *p)
{
	struct node *pl=p->lchild;
	struct node *plr=pl->rchild;
	
	pl->rchild=p;                          //rotation 
	p->lchild=plr;                         //rotations
	
	p->height=NodeHeight(p);                 //heights updated
	pl->height=NodeHeight(pl);
	
	if(root==p)                         //root parrt
	{
		root=pl;
	}
	return pl;
}
struct node *LR(struct node *p)
{
	struct node *pl=p->lchild;
	struct node *plr=pl->rchild;
	
	pl->rchild=plr->lchild;
	p->lchild=plr->rchild;
	
	plr->lchild=pl;
	plr->rchild=p;
	
	pl->height=NodeHeight(pl);
	p->height=NodeHeight(p);                 //heights updated
	plr->height=NodeHeight(plr);
	
	if(root=p)
	{
		root=plr;
	}
	return plr;
}
struct node *RR(struct node *p)
{
	struct node *pr=p->rchild;
	struct node *prl=pr->lchild;
	
	pr->lchild=p;                          //rotation 
	p->rchild=prl;                         //rotations
	
	p->height=NodeHeight(p);               //heights updated
	pr->height=NodeHeight(pr);
	
	if(root==p)                            //root part
	{
		root=pr;
	}
	return pr; 
}
struct node *RL(struct node *p)
{
	struct node *pr=p->rchild;
	struct node *prl=pr->lchild;
	
	pr->lchild=prl->rchild;                   //rotations
	p->rchild=prl->lchild;
	prl->rchild=pr;
	prl->lchild=p;
	
	pr->height=NodeHeight(pr);
	p->height=NodeHeight(p);                 //heights updated
	prl->height=NodeHeight(prl);
	
	if(root==p)
	{
		root=prl;
	}
	return prl;
}
struct node *rinsert(struct node *p,int value)                           
{ 
    struct node *t=NULL;
      
    if(p==NULL)                                        
	{   
	    t=new node;
		t->data=value;
		t->height=1;                                                   //height start from 1 rather than zero for convenient .
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
	
	p->height = NodeHeight(p);                                    //height of each node 
	
    if(bf(p)==2 && bf(p->lchild)==1)	                                 //four Condtions of balancing . remeber this with the rotation formula
    {
    	return LL(p);
    }else if(bf(p)==2 && bf(p->lchild)==-1)	                                
    {
    	return LR(p);
    }else if(bf(p)==-2 && bf(p->lchild)==-1)	                                
    {
    	return RR(p);
    }else if(bf(p)==-2 && bf(p->lchild)==1)	                                
    {
    	return RL(p);
    }
    
    return p;
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
rinsert(root,300);
rinsert(root,200);
rinsert(root,100);

Inorder(root);
	
}
