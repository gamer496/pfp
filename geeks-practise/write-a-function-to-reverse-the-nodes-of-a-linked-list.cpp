#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};
// http://www.geeksforgeeks.org/write-a-function-to-reverse-the-nodes-of-a-linked-list/

node *nnode(int data)
{
  node *n=(struct node *)malloc(sizeof(struct node));
  n->data=data;
  n->next=NULL;
  return n;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
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
  node *curr,*prev,*nex;
  curr=root;
  prev=NULL;
  nex=root->next;
  while(nex!=NULL)
  {
    curr->next=prev;
    prev=curr;
    curr=nex;
    nex=nex->next;
  }
  curr->next=prev;
  root=curr;
  temp=root;
  while(temp!=NULL)
  {
    cout<<temp->data<<"\n";
    temp=temp->next;
  }
  return 0;
}
