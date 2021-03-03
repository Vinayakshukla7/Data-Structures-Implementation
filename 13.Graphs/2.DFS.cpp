#include<iostream>

using namespace std;

void DFS(int AM[][7],int start,int n)
{   
	int j;
	static int visited[7]={0};
	
	if(visited[start]==0)
	{   
	    cout<<start<<" ";
	    visited[start]=1;
		for(j=1;j<n;j++)
		{
			if(AM[start][j]==1 && visited[j]==0)                    //we use stack concept as recursion uses stack so we are using recursion here.
			{
				DFS(AM,j,n);
			}
		}
	}
}

int main(){
	int AM[7][7]= {{0,0,0,0,0,0,0},
	               {0,0,1,1,0,0,0},
				   {0,1,0,0,1,0,0},
				   {0,1,0,0,1,0,0},
				   {0,0,1,1,0,1,1},
				   {0,0,0,0,1,0,0},
				   {0,0,0,0,1,0,0}};
				   
	DFS(AM,1,7);                //DFS(data structure,start vertex,size of DS)
}
