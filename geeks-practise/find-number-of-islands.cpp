// http://www.geeksforgeeks.org/find-number-of-islands/
#include<bits/stdc++.h>
using namespace std;
int n,m;

int xx[]={0,1,-1};
int yy[]={0,1,-1};
int a[1000][1000];
bool visited[1000][1000];

bool correct(int x,int y)
{
	if(x<0 || y<0 || x>=n || y>=m || a[x][y]==0)
	{
		return false;
	}
	return true;
}

void dfs(int i,int j)
{
	if(!correct(i,j))
	{
		return ;
	}
	else if(visited[i][j])
	{
		return ;
	}
	else
	{
		visited[i][j]=true;
		for(int x=0;x<3;x++)
		{
			for(int y=0;y<3;y++)
			{
				dfs(i+xx[x],j+yy[y]);
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			visited[i][j]=false;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1 && visited[i][j]==false)
			{
				dfs(i,j);
				cnt+=1;
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;
}