#include<bits/stdc++.h>
using namespace std;
// http://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/
struct node
{
  int data;
  struct node *next;
};

struct node *nnode(int data)
{
  node *n=(struct node *)malloc(sizeof(struct node));
  n->data=data;
  n->next=NULL;
  return n;
}

int main()
{
  ios::sync_with_stdio(false);
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
  int k=0;
  while(k!=m)
  {
    temp=temp->next;
    k++;
  }
  node *temp1=root;
  while(temp!=NULL)
  {
    temp=temp->next;
    temp1=temp1->next;
  }
  cout<<temp1->data<<"\n";
  return 0;
}
