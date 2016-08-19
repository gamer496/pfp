// http://www.geeksforgeeks.org/detect-cycle-undirected-graph/
// note that this assumes no parallel edges

#include<bits/stdc++.h>
using namespace std;

struct graph
{
	bool visited;
	list<int>l;
	graph()
	{
		visited=false;
	}
};

bool dfs(graph g[],int i,int pa)
{
	bool flag=true;
	g[i].visited=true;
	for(list<int>::iterator iter=g[i].l.begin();iter!=g[i].l.end();iter++)
	{
		if(*iter==pa)
		{
			continue;
		}
		else if(g[*iter].visited==true)
		{
			return false;
		}
		else
		{
			flag=flag&&dfs(g,*iter,i);
		}
	}
	return flag;
}

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	graph g[n];
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].l.push_back(y);
		g[y].l.push_back(x);
	}
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(!g[i].visited)
		{
			flag=flag&&dfs(g,i,-1);
			if(flag==false)
			{
				break;
			}
		}
	}
	cout<<flag<<"\n";
	return 0;
}