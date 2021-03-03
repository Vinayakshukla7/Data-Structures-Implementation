#include<iostream>
#include<string.h>                                        
using namespace std;

int main()
{   int i;
	string name="lUCIfer" ;                  
	
	for(i=0;name[i]!='\0';i++)              // traverse through last of string ,'\0' is the delimiter ,present at the last of string in c and c++ .
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
		}else if(name[i]>=97 && name[i]<=122)
		{
			name[i]-=32;
		}
	}
	for(i=0;name[i]!='\0';i++)
	{
		cout<<name[i];
	}
}
