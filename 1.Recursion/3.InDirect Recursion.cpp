#include<iostream>
using namespace std;

void second(int n);

void first(int n)                                    //first calls second and second calls first so circular recursion.
{
	if(n>0)
	{
		cout<<n<<" ";
		second(n-1);
	}
}

void second(int n)
{
	if(n>1)
	{
		cout<<n<<" ";
		first(n/2);
	}
}


int main(){
	first(20);
}
