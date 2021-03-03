#include<iostream>
using namespace std;

void Tower(int x,int A,int B,int C)
{   
    if(x>0){
    Tower(x-1,A,C,B);
	cout<<A<<" "<<C<<endl;
	Tower(x-1,B,A,C);
    }
	
}

int main(){
	Tower(4,1,2,3);
}
