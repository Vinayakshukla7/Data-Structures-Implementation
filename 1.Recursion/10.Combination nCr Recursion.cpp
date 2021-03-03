#include<iostream>
using namespace std;


int combination(int n,int r)                                   //we will use concept of pascal's triangle.
{
	if(r==0 || n==r)
	{
		return 1;
	}else{
		return combination(n-1,r)+combination(n-1,r-1);
	}
}
int main(){
	int n,r;
	cout<<"Enter  n : ";
	cin>>n;
	cout<<"Enter r  : ";
	cin>>r;
	cout<<combination(n,r);
}
