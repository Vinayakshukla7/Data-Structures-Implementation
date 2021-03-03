#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

void BFS(int AM[][7],int start,int n)
{   
	int i=start;
	int visited[7]={0};
	
	cout<<i<<" ";
	visited[i]=1;
	q.push(i);
	
	while(!q.empty())
	{
	    i = q.front();
	    q.pop();                                              //here we want pop() value to 'i' integer but we are using stl where pop() function does not return so we used front().
	    
		for(int j=1;j<n;j++)
		{
			if(AM[i][j]==1 && visited[j]==0)
			{
				cout<<j<<" ";
				visited[j]=1;
				q.push(j);
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
				   
	BFS(AM,4,7);                //BFS(data structure,start vertex,size of DS)
}
