#include<iostream>
using namespace std;

class UT{
	public:
		int *A;
		int n;
	public:
		UT(int n)
		{
			this->n=n;
			A=new int[(n*(n+1))/2];                       //size of 1d array required
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
};

void UT::set(int i,int j,int x){
	if(i<=j)
	{
		A[j*(j-1)/2+i-1]=x;                            //as coloumn major is easy here,this calcluation to look
	}
	
}

int UT::get(int i,int j){
	if(i<=j)
	{
		return A[j*(j-1)/2+i-1];                            //as  coloumn major
	}
	return 0;
}

void UT ::display(){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{   if(i<=j)
		    {
		    cout<<A[j*(j-1)/2+i-1]<<" ";
		    }else{
		    	cout<<0<<" ";
		    }
			
		}
		cout<<endl;
	}
}

int main(){
	int dim,x;
	cout<<"Enter the dimensions :";
	cin>>dim;
	
	UT upper(dim);
	
	cout<<"Enter Elements for upper triangle :";
	for(int i=1;i<=dim;i++)
	{
		for(int j=1;j<=dim;j++)
		{   if(i<=j)
		    {
		    cin>>x;
			upper.set(i,j,x);
		    }
			
		}
	}
	
   upper.display();
}
