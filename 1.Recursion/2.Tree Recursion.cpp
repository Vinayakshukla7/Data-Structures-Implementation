#include<iostream>
using namespace std;

void Tree(int i)                     
{
	if(i>0)
	{
	   cout<<i<<" ";
	   Tree(i-1);
	   Tree(i-1);
	}
	
}


int main(){
	
	Tree(3);
	
}
