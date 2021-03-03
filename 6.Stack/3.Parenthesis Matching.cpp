#include<iostream>
#include<string.h>
using namespace std;

struct Node{
	char data;
	struct Node *next;
};

struct Node *top = NULL;        

void Push(char val)                                        //add node at the beginning.
{
	struct Node *newnode;
	newnode = new Node;
	if(newnode == NULL)                                    //means heap is full no node is created , if heap condition is true.
	{
		cout<<"Overflow" ;
	}else{
		newnode->data=val;
		newnode->next = top;
		top = newnode ;
	}
}

char Pop()                                  //remove node from the beginning.                     
{
	struct Node *p;
	if(top==NULL)
	{
		cout<<"UnderFlow";
	}else{
	    p=top;
	    top=top->next;
	    delete p;
	}
	
}

int iscorrect(string expression)                                        //check where parenthesis are balanced or not
{
	for(int i=0; expression[i]!='\0';i++)                              
	{
		if(expression[i]=='(')                                        //if open braket then push it into stack
		{
			Push(expression[i]);
		}else if(expression[i]==')')                                  //close braket then pop the element .
		{
			if(top==NULL)
			{
				return false;
			}
			Pop();
		}
	}
	if(top==NULL)
	{
		return true;
	}else{
		return false;
	}
}


int main(){
	string exp="((a+b)/(a*b))";
	
	if(iscorrect(exp))
	{
		cout<<"Balanced";
	}else{
		cout<<"Not Balanced";
	}
}
