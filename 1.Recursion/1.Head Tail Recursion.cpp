#include<iostream>
using namespace std;

void Head(int i)                     
{
	if(i>0)
	{
	   Head(i-1);                        //has only returning phase so head recursion .
	   cout<<i<<" ";
	}
}

void Tail(int i)                     
{
	if(i>0)
	{
	   cout<<i<<" ";
	   Tail(i-1);                        //has only calling phase so tail recursion .
	   
	}
}


int main(){
	
	Head(3);
	
	cout<<endl;
	
	Tail(3);
	
}
