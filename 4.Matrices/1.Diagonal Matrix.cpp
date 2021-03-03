#include<iostream>
using namespace std;

class Diagonal{
	public:
		int *A;
		int n;
	public:
		Diagonal(int n)
		{
			this->n=n;
		    A=new int[n];
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		
};

void Diagonal::set(int i,int j,int x){
	if(i==j)
	{
		A[i-1]=x;
	}
}

int Diagonal::get(int i,int j){
	if(i==j)
	{
		return A[i-1];
	}
	return 0;
}
int main(){
	int dim,y;
	cout<<"Enter dimension of matrix : ";
	cin>>dim;
	Diagonal d(dim);
	
	cout<<"Enter the values :";
	for(int i=1;i<=dim;i++)
	{
		for(int j=1;j<=dim;j++)
		{   if(i==j){
			cin>>y;
			d.set(i,j,y);
	}
		}
	}
	
	cout<<d.get(1,1);
		cout<<d.get(2,2);
			cout<<d.get(3,3);
				cout<<d.get(4,4);
}
