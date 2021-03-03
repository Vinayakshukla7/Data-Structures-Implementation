#include<iostream>
using namespace std;

struct Stack{
	int size;
	int top;
	int *s;
};

void CreateStack(struct Stack *st)                       //Creation of stack 
{
	cout<<"Enter the size of Stack : ";
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
}

void Push(struct Stack *st,int value)                   //pushing the values into stack
{
	if(st->top==st->size-1)
	{
		cout<<"Overflow";
	}else{
		st->top++;
	    st->s[st->top]=value;
	}
}


void Pop(struct Stack *st)
{
    if(st->top==-1)
    {
    	cout<<"UnderFlow"<<endl;
    }else{
    	st->top--;
    }
}

void Peak(struct Stack st,int position)
{   
    if(st.top-position+1 < 0)
    {
    	cout<<"Invalid Position"<<endl;
    }else{
    	cout<<st.s[st.top-position+1];
    }
	
}

void Display(struct Stack st)                   //display the value in stack from top to down.
{
	for(int i=st.top;i>=0;i--)
	{
		cout<<st.s[i]<<endl;
	}
	
}



int main(){
    
	struct Stack st;
	
	int n,val,pos;
	
	CreateStack(&st);                                         //it will create a stack, call by ref as we need modification to be there after also.
	
	cout<<"how many time you want to push value into stack : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value : ";
		cin>>val;
		Push(&st,val);                                        //push the value inside the stack .
	}
	Display(st);
	
	cout<<"After pop operation on stack one time : "<<endl;
	Pop(&st);                                                //Pop the value from stack i.e..the top value.
	Display(st);
   
    cout<<"Value from which position you want : "; 
	cin>>pos; 
    Peak(st,pos);
}
