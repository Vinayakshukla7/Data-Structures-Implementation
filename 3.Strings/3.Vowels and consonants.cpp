#include<iostream>
#include<string.h>                                        
using namespace std;

int main()
{   int i,vowels=0,conso=0;
	string name="lucifer" ;                  
	
	for(i=0;name[i]!='\0';i++)                  //traverse through last of string ,'\0' is the delimiter ,present at the last of string in c and c++ .
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			vowels++;
		}else if((name[i]>=97 && name[i]<=122 ) || (name[i]>=65 && name[i]<=90))
		{
			conso++;
		}
	}
	
   cout<<"No of vowels are "<<vowels<<endl;
   cout<<"No of consonants are "<<conso<<endl;
}
