#include<iostream>
using namespace std;

void insertMax(int heap[],int n)                //insertion of heap
{ 
int temp,i=n;
temp=heap[n];
while(i>0 && temp>heap[(i-1)/2])
{
	heap[i]=heap[(i-1)/2];
	i=(i-1)/2;
	
}
 heap[i]=temp;
}

void sortMax(int del[],int n)
{
	int x,i,j,y;
	y=del[0];
	del[0]=del[n];
	i=0;
	j=2*i+1;
	while(j<n-1)                       //traverse through last parent 
	{
		if(del[j+1]>del[j])
		{
			j=j+1;
		}
		if(del[j]>del[i])
		{
			x=del[i];
			del[i]=del[j];
			del[j]=x;
			i=j;
			j=2*i+1;
		}else{
			break;
		}
	}
	del[n]=y;                                    //used to put the max element from right hand site at which get vacant in lin no 21 in this code.
	for(int i=0;i<7;i++)
	{
		cout<<del[i]<<" ";
	}
}


int main()
{
	int array[]={10,20,30,25,5,40,37};
	int i;
	for(i=1;i<7;i++)
	{
		insertMax(array,i);
	}
	for(i=6;i>0;i--)                           //getting sorted array from Max heap.
	{
		sortMax(array,i);
		cout<<endl;
	}
	
}
