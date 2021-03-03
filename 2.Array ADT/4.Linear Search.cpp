#include<iostream>                       
using namespace std;

struct Array                              //array with its properties
{
	int A[10];
	int size;
	int length;
};


int LinearSearch(struct Array *arr,int value)             
{   
     for(int i=0;i<arr->length;i++)
     {
     	if(arr->A[i]== value)
     	{
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
