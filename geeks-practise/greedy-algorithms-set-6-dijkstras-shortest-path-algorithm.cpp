// http://www.geeksforgeeks.org/greedy-algorithms-set-6-dijkstras-shortest-path-algorithm/
#include<bits/stdc++.h>
using namespace std;
#define INF 100000

struct graph
{
	bool visited;
	list< pair<int,int> >l;			//first for vertex second for weight
	graph()
	{
		visited=false;
	}
};

struct compare
{
	bool operator()(pair<int,int> &a,pair<int,int> &b)
	{
		return a.second>b.second;
	}
};

void dij(graph g[],int l[],int v,int n)
{
	priority_queue< pair<int,int> , vector< pair<int,int> >, compare >pq;
	pq.push(make_pair(v,0));
	l[v]=0;
	while(!pq.empty())
	{
		int vertex=pq.top().first;
		pq.pop();
		if(g[vertex].visited)
		{
			continue;
		}
		for(list< pair<int,int> >::iterator iter=g[vertex].l.begin();iter!=g[vertex].l.end();iter++)
		{
			int distance=l[vertex]+iter->second;
			if(!g[iter->first].visited && distance<l[iter->first])
			{
				l[iter->first]=distance;
				pq.push(make_pair(iter->first,distance));
			}
			g[vertex].visited=true;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<l[i]<<"\n";
	}
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
		int x,y,w;
		cin>>x>>y>>w;
		g[x].l.push_back(make_pair(y,w));
		g[y].l.push_back(make_pair(x,w));
	}
	int l[n];
	for(int i=0;i<n;i++)
	{
		l[i]=INF;
	}
	dij(g,l,0,n);
	return 0;
}