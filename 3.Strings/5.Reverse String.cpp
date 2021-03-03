#include<iostream>
#include<string.h>                                        
using namespace std;

void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


void Reverse(string names)
{   int i,j;
	for(j=0;names[j]!='\0';j++)                  //traverse through last of string ,'\0' is the delimiter ,present at the last of string in c and c++ .
	{
	}
	j--;
	
	for(i=0 ; i<j ; i++,j--)
	{
		swap(&names[i],&names[j]);
	}
	
	for(int i=0;names[i]!='\0';i++)
	{
		cout<<names[i];
	}
}


int main()
{   
	string name="lucifer" ;                  
	
    Reverse(name);
    
}
