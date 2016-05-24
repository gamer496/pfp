// http://www.practice.geeksforgeeks.org/probfunc-page.php?pid=700040
// http://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/

#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

node * nnode(int data)
{
  node *n=(struct node *)malloc(sizeof(struct node));
  n->data=data;
  n->next=NULL;
  return n;
}

int main()
{
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    node *root=NULL,*temp=NULL;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      if(root==NULL)
      {
        root=nnode(x);
        temp=root;
      }
      else
      {
        temp->next=nnode(x);
        temp=temp->next;
      }
    }
    temp=root;
    int j=0;
    while(j!=m)
    {
      temp=temp->next;
      j++;
    }
    cout<<temp->data<<"\n";
  }
  return 0;
}
