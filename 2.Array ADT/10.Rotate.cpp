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

void Rotate(struct Array *obj)                   //rotating add the first value from the last of same array .so length never changes.
{  int temp,i;
   temp=obj->A[0];
  for(int i=1;i<obj->length;i++)
  {
  	obj->A[i-1]=obj->A[i];                               
  }
  obj->A[obj->length-1]=temp;
}

int main(){
	
	struct Array obj={{10,45,36,2,9,7},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
	Rotate(&obj);
	
    cout<<"Rotation of Array by one index: ";
    Display(obj);

}
