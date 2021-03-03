#include<iostream>
using namespace std;

class LT{
	public:
		int *A;
		int n;
	public:
		LT(int n)
		{
			this->n=n;
			A=new int[(n*(n+1))/2];                       //size of 1d array required
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
};

void LT::set(int i,int j,int x){
	if(i>=j)
	{
		A[i*(i-1)/2+j-1]=x;                            //as row is easy here,this calcluation to look
	}
	
}

int LT::get(int i,int j){
	if(i>=j)
	{
		return A[i*(i-1)/2+j-1];                            //as row major
	}
	return 0;
}

void LT ::display(){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{   if(i>=j)
		    {
		    cout<<A[i*(i-1)/2+j-1]<<" ";
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
	
	LT lower(dim);
	
	cout<<"Enter Elements for lower triangle :";
	for(int i=1;i<=dim;i++)
	{
		for(int j=1;j<=dim;j++)
		{   if(i>=j)
		    {
		    cin>>x;
			lower.set(i,j,x);
		    }
			
		}
	}
	
   lower.display();
}
