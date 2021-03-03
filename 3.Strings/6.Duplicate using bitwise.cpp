#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string name="abcdef";
	long int H=0,x=0;                   //for bit shifting ,as long has 4 btyes which is equal to 2^4 bits in memory
	
	for(int i=0;name[i]!='\0';i++)
	{
		x=1;                               
		x=x<<name[i]-97;
		if(x&H>0)                               //here as x is one now then if H is one that means there is duplicate .
		{
			cout<<"duplicate found";
			break;
		}else{
			H=x|H;                             //mark the appearence of element
		}
	}
	cout<<"no duplicate found";
}
