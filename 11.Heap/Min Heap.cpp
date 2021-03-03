#include<iostream>
using namespace std;

void insertMin(int heap[],int n)                         //insertion
{ 
int temp,i=n;
temp=heap[n];
while(i>0 && temp<heap[(i-1)/2])                     //itration limit and condition to swap.
{
	heap[i]=heap[(i-1)/2];
	i=(i-1)/2;
	
}
 heap[i]=temp;	
 if(n==6)                                           //to print final heap
 {
 	cout<<"Final Min Heap";
 	for(int j=0;j<7;j++)
 	{
 		cout<<" "<<heap[j]<<" ";
 	}
 }else{
 	for(int j=0;j<7;j++)                          //to print intermediate heap
 	{
 		cout<<heap[j]<<" ";
 	}
 	cout<<endl;
 }
}

void deleteMin(int del[],int n)
{
	int x,i,j,y;
	del[0]=del[n];
	i=0;
	j=2*i+1;
	while(j<n)                       //traverse through last parent 
	{
		if(del[j+1]<del[j])
		{
			j=j+1;
		}
		if(del[j]<del[i])
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
	cout<<"Heap After deleting min element ";
	for(int j=0;j<n;j++)
 	{   
 		cout<<" "<<del[j]<<" ";
 	}
 	cout<<endl;
	
}



int main()                                             
{
	int array[]={10,20,30,25,5,40,37};
	int i;
	for(i=0;i<7;i++)                                //Heap Creation
	{
		insertMin(array,i);                        //insertion of element in such a way that it result mmin heap.
	}
	cout<<endl;
	for(i=6;i>0;i--)
	{
		deleteMin(array,i);                       //deleting minimum element from heap.
	}
	
}
