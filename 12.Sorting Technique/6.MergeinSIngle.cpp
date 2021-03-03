#include<iostream>
using namespace std;

void SingleOne(int a[],int l,int mid,int h)
{
    int i,j,k;
	int c[h+1];
	i=l,j=mid+1,k=l;
  while(i<=mid && j<=h)
  {	
	if(a[i]<a[j])
	{
		c[k]=a[i];
		i++;
		k++;
	}else{
		c[k]=a[j];
		j++;
		k++;
	}
	for(int g=0;g<k;g++)                    //this print every single element insertion.             
	{
		cout<<c[g]<<" ";
	}
	cout<<endl;
  }
  for(;i<=mid;i++)                             //this two for loop will work when there is difference in size of arrays
  {
  	c[k]=a[i];
  	k++;
  }
  for(;j<=h;j++)
  {
  	c[k]=a[j];
  	k++;
  }
  for(int g=l;g<=h;g++)
  {
  	a[g]=c[g];
  }
  for(int g=l;g<=h;g++)                 
  {
	 cout<<a[g]<<" ";
  }
}

int main()
{
	int arr1[]={2,5,12,1,3,6,7,10};                            //array must be sorted before and after the mid choosen
	SingleOne(arr1,0,2,7);
}

