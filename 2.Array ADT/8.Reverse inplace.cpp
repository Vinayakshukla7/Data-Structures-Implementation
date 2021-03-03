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

void Reverse(struct Array *obj)
{   int i,j;
    i=0;
    j=obj->length-1;
	while(i<j)
	{
		swap(&obj->A[i],&obj->A[j]);          //this performs swaps between same array ,so inplace arrangements
		i++;
		j--;
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
