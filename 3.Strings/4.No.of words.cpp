#include<iostream>
#include<string.h>                                        
using namespace std;

void count(string names)
{   int i,space=0;
	for(i=0;names[i]!='\0';i++)                  //traverse through last of string ,'\0' is the delimiter ,present at the last of string in c and c++ .
	{
		if(names[i]==' '&& names[i-1]!=' ')      //cout space and whitespace as one space.
		{
			space++;
		}
	}
	
   cout<<"No of words in sentences are "<<space<<endl;
}


int main()
{   
	string name="I am here to write string codes " ;                  
	
	count(name);
}
