#include<iostream>
using namespace std;

void swap(int *x,int *y)                                       //this will swap the values using third variable temp
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void SelectionSort(int selection[],int n)                           //main logic of insertion sort
{ 
  int i,j,k; 
  for(int i=0;i<n-1;i++)
  {
  	for(j=k=i;j<n;j++)
  	{
  		if(selection[j]<selection[k])
  		{
  			k=j;
  		}
  	}
  	swap(&selection[i],&selection[k]);
  	
  	for(int z=0;z<n;z++)                                          //used to print the array after every pass
  	{
  		cout<<selection[z]<<" ";
  	}
  	cout<<endl;
  }
  
}


int main()
{
	int array[]={20,10,30,25,5,40,37};
	int i,f;
	f=7;
    SelectionSort(array,f);                       //function calling 
}
