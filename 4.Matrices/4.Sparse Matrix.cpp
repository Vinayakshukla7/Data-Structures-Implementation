#include<iostream>
using namespace std;

struct Element{
	int i;
	int j;
	int x;
};

struct Sparse{
	int m;
	int n;
	int num;
	struct Element *ele;
};

void create(struct Sparse *s)
{
	cout<<"Enter the dimensions : ";
	cin>>s->m;
	cin>>s->n;
	
	cout<<"Enter number of non-zero values :";
	cin>>s->num;
	
	s->ele=new Element[s->num];
	
	cout<<"Enter non-zero values :";
	for(int i=0;i<s->num;i++)
	{
		cin>>s->ele[i].i>>s->ele[i].j>>s->ele[i].x;
	}
}

void display(struct Sparse s){
	int k=0;
	for(int i=0;i<s.m;i++)
	{
		for(int j=0;j<s.n;j++)
		{
			if(i==s.ele[k].i && j==s.ele[k].j)
			{
				cout<<s.ele[k++].x<<" ";
			}else{
				cout<<0<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
	struct Sparse s;
	
	create(&s);
	
	display(s);
}
