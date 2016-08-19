// https://www.hackerrank.com/challenges/bfsshortreach
#include<bits/stdc++.h>
using namespace std;

struct graph
{
	bool visited;
	int distance;
	list<int>l;
	graph()
	{
		visited=false;
		distance=-1;
	}
};


int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		graph g[n];
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			--x,--y;
			g[x].l.push_back(y);
			g[y].l.push_back(x);
		}
		int x;
		cin>>x;
		--x;
		queue<int>q;
		q.push(x);
		g[x].visited=true;
		g[x].distance=0;
		while(!q.empty())
		{
			int j=q.front();
			q.pop();
			list<int>::iterator iter;
			for(iter=g[j].l.begin();iter!=g[j].l.end();iter++)
			{
				if(!g[*iter].visited)
				{
					g[*iter].visited=true;
					g[*iter].distance=g[j].distance+6;
					q.push(*iter);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i==x)
			{
				continue;
			}
			cout<<g[i].distance<<" ";
		}
		cout<<"\n";
	}
	return 0;
}