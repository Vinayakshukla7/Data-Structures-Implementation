#include<iostream>
using namespace std;

void TwoInOne(int a[],int b[],int x,int y)
{
    int i,j,k;
	int c[x+y];
	i=j=k=0;
  while(i<x && j<y)
  {	
	if(a[i]<b[j])
	{
		c[k]=a[i];
		i++;
		k++;
	}else{
		c[k]=b[j];
		j++;
		k++;
	}
	for(int g=0;g<k;g++)                    //this print every single element insertion.             
	{
		cout<<c[g]<<" ";
	}
	cout<<endl;
  }
  for(;i<x;i++)                             //this two for loop will work when there is difference in size of arrays
  {
  	c[k]=a[i];
  	k++;
  }
  for(;j<y;j++)
  {
  	c[k]=b[j];
  	k++;
  }
    for(int g=0;g<9;g++)                 
	{
		cout<<c[g]<<" ";
	}
}

int main()
{
	int arr1[]={4,5,6,9,10,16};                            //this two array must be sorted 
	int arr2[]={2,7,12};
	
	
	TwoInOne(arr1,arr2,6,3);
}

