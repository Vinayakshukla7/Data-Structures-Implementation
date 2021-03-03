#include<iostream>
using namespace std;

void swap(int *x,int *y)                                       //this will swap the values using third variable temp
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void BubbleSort(int bubble[],int n)                           //main logic of bubble sort
{   int flag;                                                 //this is used to achieve adaptive behaviour 
	for(int i=0;i<n-1;i++)                                    //decides the passes we need to take
	{   flag=0;
	    cout<<endl;
	    for(int k=0;k<n;k++)                                  //this loop and the loop of k after swap is added to print the array after each comparsion .
        {
    	    cout<<bubble[k]<<" ";
        }
        cout<<endl;
        
		for(int j=0;j<n-i-1;j++)                              //decides the comparion we need to take 
		{  
			if(bubble[j]>bubble[j+1])                 
			{   
				swap(bubble[j],bubble[j+1]);
				flag=1;
			}
			
		    for(int k=0;k<n;k++)
            {
    	        cout<<bubble[k]<<" ";
            }
        cout<<endl;
		}
		
	if(flag==0) 
	{
		break;                         //so swaping is done and the array is sorted now ,so donot need to continue further .
    }
}
}


int main()
{
	int array[]={10,20,30,25,5,40,37};
	//int array[]={1,2,3,4,5};
	int i,f;
	f=5;
    BubbleSort(array,f);                       //function calling 
}
