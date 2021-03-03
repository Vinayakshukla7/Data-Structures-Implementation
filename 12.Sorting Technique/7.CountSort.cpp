#include<iostream>
using namespace std;

int maxelement(int x[],int y)
{   int temp=x[0];
	for(int i=1;i<y;i++)
	{
		if(x[i]>temp)
		{
			temp=x[i];
		}
	}
	return temp;
}
void Countsort(int countar[],int n)
{   
    int max,i,j;
	int *a;
	
	max=maxelement(countar,n);            //maximum from previous element 
	
	a=new int[max+1];                    //new array is create which include count of element appeared
	
	for(int i=0;i<max+1;i++)             //initialize new array to zero				
	{
		a[i]=0;
	}  
	for(int i=0;i<n;i++)                                 
	{ 
	a[countar[i]]++;
	} 
	i=0;j=0;                    
   
    while(i<max+1)              
	{	
	if(a[i]>0)
	{
		countar[j]=i;
		j++;
		a[i]--;
	}else{
		i++;
	}
   }
for(int i=0;i<n;i++)                                 
{ 
 cout<<countar[i]<<" ";
} 

}

int main()
{
	int arr1[]={4,6,2,9,4,9,3,6,2,1,2,9};                            
	Countsort(arr1,12);
}

