// http://www.geeksforgeeks.org/find-if-there-is-a-path-between-two-vertices-in-a-given-graph/
#include<bits/stdc++.h>
using namespace std;

struct graph
{
	int val;
	bool visited;
	list<int>l;
};

bool dfs(graph g[],int x,int dest)
{
	bool flag;
	g[x].visited=true;
	if(x==dest)
	{
		return true;
	}
	else
	{
		flag=false;
		for(list<int>::iterator iter=g[x].l.begin();iter!=g[x].l.end();iter++)
		{
			if(!g[*iter].visited)
			{
				flag=flag||dfs(g,*iter,dest);
			}
		}
		return flag;
	}
}

int main()
{
	int n;
	cin>>n;
	graph g[n];
	int m;
	cin>>m;
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].l.push_back(y);
	}
	cin>>x>>y;
	if(dfs(g,x,y))
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	return 0;
}