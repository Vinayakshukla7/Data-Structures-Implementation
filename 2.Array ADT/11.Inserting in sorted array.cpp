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

void insertin(struct Array *obj,int value)                   //insertion of value in sorted list
{ int i;  
  for(i=obj->length-1;i>=0;i--)                             //will traverse through the correct place .
   {
     if(value<=obj->A[i])
     {
     	obj->A[i+1]=obj->A[i];
     }else{
     	break;
     }
   }
   obj->A[i+1]=value;                                    //insert value at right place 
   obj->length++;                         
}

int main(){
	
	struct Array obj={{22,46,57,68,98,104},10,6};
	
	cout<<"Given Array : ";
	Display(obj);
	 
	insertin(&obj,62);

    cout<<"After the insertion of value: ";
    Display(obj);

}
