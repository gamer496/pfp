// http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/
#include<bits/stdc++.h>
using namespace std;

struct graph
{
  int val;
  bool visited;
  list<int>l;
  graph()
  {
    visited=false;
  }
};

void dfs(int i,graph g[])
{
  g[i].visited=true;
  cout<<i<<endl;
  list<int>::iterator iter;
  for(iter=g[i].l.begin();iter!=g[i].l.end();iter++)
  {
    if(!g[*iter].visited)
    {
      dfs(*iter,g);
    }
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
    int x,y;
    cin>>x>>y;
    g[x].l.push_back(y);
  }
  for(int i=0;i<n;i++)
  {
    if(g[i].visited==false)
    {
      dfs(i,g);
    }
  }
}
