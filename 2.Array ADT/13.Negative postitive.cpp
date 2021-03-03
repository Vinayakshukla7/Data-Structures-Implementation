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
	cout<<endl;
}

/*
void Change(struct Array *obj)                   //check wheather it is sorted or not
{ 
    int i,j;
	i=0;
	j=obj->length-1;
	while(i<j)
	{
		if(obj->A[j]<0 && obj->A[i]>=0)           //first one is positive and last is negative then we will swap
		{
		    swap(&obj->A[j],&obj->A[i]);
			i++;
			j--;	
		}else if(obj->A[i]>0 && obj->A[j]>0)      //both are positive 
		{
			j--;
		}else if(obj->A[i]<0 &&obj->A[j]<0)      //both are negative 
		{
			i++;
		}
	}               
}
*/

void Change(struct Array *obj)                   //small code .
{ 
    int i,j;
	i=0;
	j=obj->length-1;
	while(i<j)
	{
		while(obj->A[i]<0){ i++; }
		while(obj->A[j]>=0){ j--;}
		if(i<j)
		{
			swap(&obj->A[j],&obj->A[i]);
		}
	}               
}

int main(){
	int x;
	struct Array obj={{4,-2,45,-80,-36,23},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
    Change(&obj);
    cout<<"changed array: ";
    Display(obj);

}
