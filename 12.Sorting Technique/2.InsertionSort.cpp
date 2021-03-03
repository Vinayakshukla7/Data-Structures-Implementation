#include<iostream>
using namespace std;


void InsertionSort(int insertion[],int n)                           //main logic of insertion sort
{   
  for(int i=1;i<n;i++)
  { int x,j;
  	j=i-1;
  	x=insertion[i];
  	while(j>-1 && insertion[j]>x)
  	{
  		insertion[j+1]=insertion[j];
  		j--;
  	}
  	insertion[j+1]=x;
  	
  	for(int k=0;k<n;k++)                                          //used to print the array after every pass
  	{
  		cout<<insertion[k]<<" ";
  	}
  	cout<<endl;
  }
}


int main()
{
	int array[]={20,10,30,25,5,40,37};
	int i,f;
	f=7;
    InsertionSort(array,f);                       //function calling 
}
