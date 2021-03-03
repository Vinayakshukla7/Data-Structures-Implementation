#include<iostream>
using namespace std;

int Nested(int n)                                    //recursive function will pass parameter as the recursive call
{
	if(n>100)
	{
		return n-10;
	}else{
		return Nested(Nested(n+11));
	}
}



int main(){
	
	cout<<Nested(95);                  
}
