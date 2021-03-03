#include<iostream>
using namespace std;

int Rfab(int n)                                              //recursion approch takes O(2^n) time.but it can be minimized to O(n)through memoization.
{
	if(n<=1)
	{
		return n;
	}else{
		return Rfab(n-2)+Rfab(n-1);
	}
}

int Ifab(int n)                                               //its iteration so it takes O(n) time.                  
{
	int first=0,second=1,sum;
	if(n<=1)
	{
		return n;
	}
	for(int i=2;i<=n;i++)
	{
		sum=first+second;
		first=second;
		second=sum;
	}
	return sum;
}
int main(){
	int x;
	cout<<"Enter Number: ";
	cin>>x;
	cout<<Rfab(x);                //recursive manner
	cout<<endl;
	cout<<Ifab(x);                //iterative manner
}
