#include<iostream>
using namespace std;

int naturalSum(int n)
{
	if(n==1)
	{
		return n;
	}else{
		return n+naturalSum(n-1);
	}
}

int main(){
	int x;
	cout<<"Enter Number : ";
	cin>>x;
	cout<<naturalSum(x);
}
