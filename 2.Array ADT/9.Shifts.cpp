#include<iostream>
using namespace std;

struct Array {
int A[10];
int size;
int length;
};

void swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void Display(struct Array obj)                     //displays the values .
{
	for(int i=0;i<obj.length;i++)
	{
		cout<<obj.A[i]<<" ";
	}
}

void Leftshift(struct Array *obj)                   //shifting logic
{  
  for(int i=1;i<obj->length;i++)
  {
  	obj->A[i-1]=obj->A[i];                               
  }
}

int main(){
	
	struct Array obj={{10,45,36,2,9,7},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
	Leftshift(&obj);
	obj.length--;
	
    cout<<"Shifted Array : ";
    Display(obj);

}
