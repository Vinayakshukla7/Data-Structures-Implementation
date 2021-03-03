#include<iostream>
#include<string.h>
using namespace std;

struct Stack{
	char data;
	struct Stack *next;
};

struct Stack *top=NULL;
char postfix[20];

void push(char value)                
{
	struct Stack *newnode ;
	newnode=new Stack;
	
	if(newnode == NULL)
	{
		cout<<"Overflow";
	}else{
		newnode->data=value;
		newnode->next=top;
		top=newnode;
	}
} 

char pop()
{
char x;
struct Stack *p;
if(top == NULL)
{
	cout<<"UndeFlow";
}else{
	p=top;
	x=p->data;
	top=top->next;
	delete p;
}
return x;
}

int isoperand(char x)
{
	if(x=='+' || x=='-' || x=='*' || x=='/')
	{
		return 0;
	}else{
		return 1;
	}

}

int preseOrder(char y)
{
	if(y=='+' || y=='-')
	{
		return 1;
	}else if(y=='*' || y=='/')
	{
		return 2;
	}else{
		return 0;
	}
}

void convert(string expression,int size)
{
	int i=0,j=0;
	
	while(expression[i] != '\0')
	{
		if(isoperand(expression[i]))
		{
			postfix[j]=expression[i];
			i++;
			j++;
		}else{
		
			if(preseOrder(expression[i])>preseOrder(top->data))
			{
				push(expression[i]);
				i++;
			}else{
				postfix[j]=pop();
				j++;
			}
		}
	}
	while(top!=NULL)
	{
		postfix[j]=pop();
		j++;
	}
	
	postfix[j]='\0';
	
	cout<<postfix;
}

int main(){
	
	string expression = "a+b*c-d/e";
	int length = 9;
	convert(expression,length);
}
