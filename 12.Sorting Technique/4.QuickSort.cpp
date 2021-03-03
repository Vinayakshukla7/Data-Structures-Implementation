#include<iostream>
using namespace std;

void swap(int *x,int *y)                                       //this will swap the values using third variable temp
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int mainlogic(int quick[],int l,int h)
{
	int i,j,pivot;
	pivot=quick[l];
	i=l;j=h;
	
	while(i<j)
	{
	do{i++;}while(quick[i]<=pivot);                //interate untill get larger
	do{j--;}while(quick[j]>pivot);                 //iterate untill get smaller
	if(i<j)
	{
     swap(&quick[i],&quick[j]);                //put smallest element to left hand side and larger element to right hand side.
	
	for(int k=0;k<10;k++)                       //used to print each step
	{
		cout<<quick[k]<<" ";
	}
	cout<<endl;
	
	}
	}
	swap(&quick[l],&quick[j]); 
	
	for(int k=0;k<10;k++)                      //used to print each step
	{
		cout<<quick[k]<<" ";
	} 
	cout<<endl;  
	                
    return j;	
}

void Quicksort(int quick[],int l,int h)
{
	int j;
	if(l<h)
	{   
		j=mainlogic(quick,l,h);         //main algo of quick sort
		
		Quicksort(quick,l,j);           //quick sort is applied to left part of pivot
		
		Quicksort(quick,j+1,h);         //quick sort is applied to the right part of pivot.
		
	}
}
int main()
{
	int array[]={11,13,7,12,16,9,24,5,10,3},n=10;
	
	Quicksort(array,0,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
}

