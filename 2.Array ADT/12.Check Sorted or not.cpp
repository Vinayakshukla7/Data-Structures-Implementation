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

int check(struct Array *obj)                   //check wheather it is sorted or not
{ 
  for(int i=1;i<obj->length;i++)                        
   {
     if(obj->A[i]<obj->A[i-1])
     {
     	return -1;
     }
   }
    return 1;                 
}

int main(){
	int x;
	struct Array obj={{22,46,57,105,98,104},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
	x=check(&obj);                              //to check
	
	if(x>0)
	{
		cout<<" and this Array is Sorted";
	}else{
		cout<<" and this Arrat is not Sorted";
	}



}
