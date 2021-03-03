#include<iostream>                       
using namespace std;

struct Array                              //array with its properties
{
	int A[10];
	int size;
	int length;
};

int BinarySearch(struct Array *arr,int value)             
{   int low,high,mid;
    low=0;
    high=arr->length-1;
    while(low<=high)
    {
     mid=(low+high)/2;
    if(arr->A[mid]==value)                                     //value found here
    {
    	return mid;
    }else if(arr->A[mid]>value)                               //value is less than mid ,then array logic to left part
    {
    	high=mid-1;
    }else{                                                   //value is greater than mid ,then array logic to rigth part
    	low=mid+1;
    }
}
 return -1;
}

int main()
{   
    int x;
    struct Array obj={{8,5,99,1,4,7},10,6};
    x=BinarySearch(&obj,99);                          //as we use reference of obj then we should use *(pointer) in the formal paramter and also implement by -> instead of (dot).
    
	if(x>=0)
    {
    	cout<<"Found at "<<x;
    }else{
    	cout<<"Not Found";
    }
}
