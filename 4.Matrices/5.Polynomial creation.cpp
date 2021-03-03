#include<iostream>
using namespace std;

struct Term{
	int coeff;
	int exp;
};

struct poly{
	int n;
	struct Term *terms;
};

void create(struct poly *p)
{
	cout<<"Enter number of terms :";
	cin>>p->n;
	
	p->terms=new Term[p->n];
	
	cout<<"Enter terms first coef then exponent:";
	for(int i=0;i<p->n;i++)
	{
		cin>>p->terms[i].coeff>>p->terms[i].exp;
	}
}

void display(struct poly p)
{
	for(int i=0;i<p.n;i++)
	{   
		cout<<p.terms[i].coeff<<"x"<<p.terms[i].exp<<" + ";
	}
}
int main(){
	struct poly p;
	
	create(&p);
	
	display(p);
}
