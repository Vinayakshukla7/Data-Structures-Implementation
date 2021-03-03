#include<iostream>
using namespace std;


void shellsort(int shell[],int n)
{   int temp,j;
for(int gap=n/2;gap>=1;gap/=2)
{   
	for(int i=gap;i<n;i++)
	{
		temp=shell[i];                                           
		j=i-gap;                                                // to maintain the difference of j and i equal to gap.
		while(j>=0 && shell[j]>temp)                            //if greater than enter
		{  
            shell[j+gap]=shell[j];                             //it will always swap at required positions of gap
            j=j-gap;                                          //to terminate while 
		}
		shell[j+gap]=temp;                                   //values got exhange here .
	}
	
	for(int k=0;k<n;k++)                                  //this loop display array after every pass.
	{
		cout<<shell[k]<<" ";
	}
	cout<<endl;
}

}

int main()
{
	int arr1[]={8,30,45,12,8,7,9,36,17,56}; 
	                           
	shellsort(arr1,10);

}

