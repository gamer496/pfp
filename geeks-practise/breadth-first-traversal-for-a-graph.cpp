// http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/
#include<bits/stdc++.h>
using namespace std;

struct graph
{
  int val;
  list<int>l;
  bool visited;
};


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
    if(!g[i].visited)
    {
      queue<int>q;
      q.push(i);
      g[i].visited=true;
      while(!q.empty())
      {
        int x=q.front();
        q.pop();
        cout<<x<<"\n";
        list<int>::iterator iter;
        for(iter=g[x].l.begin();iter!=g[x].l.end();iter++)
        {
          if(!g[*iter].visited)
          {
            q.push(*iter);
            g[*iter].visited=true;
          }
        }
      }
    }
  }
  return 0;
}
