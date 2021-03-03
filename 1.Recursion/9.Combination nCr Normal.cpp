#include<iostream>
using namespace std;

int Factorial(int n)
{
	if(n==0)
	{
		return 1;
	}else{
		return n*Factorial(n-1);
	}
}

int combination(int n,int r)
{
	int temp1,temp2,temp3;
	temp1=Factorial(n);
	temp2=Factorial(n-r);
	temp3=Factorial(r);
	
	return temp1/(temp3*temp2);
}
int main(){
	int n,r;
	cout<<"Enter  n : ";
	cin>>n;
	cout<<"Enter r  : ";
	cin>>r;
	cout<<combination(n,r);
}
