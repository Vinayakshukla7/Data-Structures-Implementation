#include<iostream>                       
using namespace std;

struct Array                              //array with its properties
{
	int A[10];
	int size;
	int length;
};

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int LinearSearch(struct Array *arr,int value)             
{   
     for(int i=0;i<arr->length;i++)
     {
     	if(arr->A[i]== value)
     	{   
     	    swap(&arr->A[i],&arr->A[0]);                  //just added this which makes this known as 'move to front'.As when we search next time we get element at zero index .
     		return i;
     	}
     }
  return -1;
}

int main()
{   int x;
    struct Array obj={{8,5,99,1,4,7},10,6};
    x=LinearSearch(&obj,99);                          //as we use reference of obj then we should use *(pointer) in the formal paramter and also implement by -> instead of (dot).
    
	if(x>=0)
    {
    	cout<<"Found at "<<x;
    }else{
    	cout<<"Not Found";
    }
}
