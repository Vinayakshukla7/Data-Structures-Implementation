#include<iostream>
using namespace std;

struct Array {
int A[10];
int size;
int length;
};

void Display(struct Array obj)                     //displays the values .
{
	for(int i=0;i<obj.length;i++)
	{
		cout<<obj.A[i]<<" ";
	}
}

void Reverse(struct Array *obj)
{
	int *B= new int[obj->length];
	int i,j;
	for(int i=obj->length-1,j=0;i>=0;i--,j++)         //to put values of A into B .Taking values from A from last and appending into B from starting.
	{
		B[j]=obj->A[i];
	}
	for(int i=0;i<obj->length;i++)
	{
		obj->A[i]=B[i];
	}
}

int main(){
	
	struct Array obj={{10,45,36,2,9,7},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
	Reverse(&obj);
	
    cout<<"Reversed Array : ";
    Display(obj);

}
