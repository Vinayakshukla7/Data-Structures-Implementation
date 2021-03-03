#include<iostream>                       //append use to enter value at last and insert(index,value) insert value to particular index.
using namespace std;

struct Array                              //array with its properties
{
	int A[10];
	int size;
	int length;
};

void Append(struct Array *arr,int x)              //insert value at last
{
	if(arr->length < arr->size)
	{
		arr->A[arr->length] = x;                 
		arr->length++;                          //if we use this above at index place then also first it will assignt the value then increments its length.
	}
}

void Insert(struct Array *arr,int index ,int value)             
{   
     if(index >=0 && arr->length >= index)
     {
     	for(int i=arr->length;i>index;i--)                  //traverse till index
     	{
     		arr->A[i]=arr->A[i-1];
     	}
     	arr->A[index]=value;                                //insert the value at index
     	arr->length++;
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
{   struct Array obj={{8,5,6,1,4,7},10,6};
    Append(&obj,64);                          //as we use reference of obj then we should use *(pointer) in the formal paramter and also implement by -> instead of (dot).
    Display(obj); 
    cout<<endl;
	Insert(&obj,2,56);                       //insert value=56 in array obj at index =0 
	Display(obj); 
}
