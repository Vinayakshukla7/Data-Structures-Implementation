#include<iostream>
using namespace std;

struct Array                        //array with its properties
{
	int *A;
	int size;
	int length;
};


void Display(struct Array obj)                     //displays the values .
{
	for(int i=0;i<obj.length;i++)
	{
		cout<<obj.A[i];
	}
}

int main()
{   struct Array obj;

	cout<<"Enter size of array"<<endl;
	cin>>obj.size;
	
	obj.A=new int[obj.size];                    //by this  pointer A created in stack will points array created in heap.

    cout<<"Enter the number of inputs wants to give "<<endl;
    cin>>obj.length;
    
    for(int i=0;i<obj.length;i++)                    
    {
    	cin>>obj.A[i];
    }
    
    Display(obj);                    //print the array,not making any changes so with & we passed the obj.
}
