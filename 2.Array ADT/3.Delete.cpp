#include<iostream>                       
using namespace std;

struct Array                              //array with its properties
{
	int A[10];
	int size;
	int length;
};


void Delete(struct Array *arr,int index)             
{   
     if(index >=0 && arr->length >= index)
     {
     	for(int i=index+1;i<=arr->length;i++)                  //shift the elements
     	{
     		arr->A[i-1]=arr->A[i];
     	}
        arr->length--;
     }
	
}

void Display(struct Array obj)                     //displays the values .
{
	for(int i=0;i<obj.length;i++)
	{
		cout<<obj.A[i]<<" ";
	}
}

int main()
{   struct Array obj={{8,5,99,1,4,7},10,6};
    Delete(&obj,2);                          //as we use reference of obj then we should use *(pointer) in the formal paramter and also implement by -> instead of (dot).
    cout<<"array after deleting has reduced to length of "<<obj.length<<endl;
    Display(obj); 
}
