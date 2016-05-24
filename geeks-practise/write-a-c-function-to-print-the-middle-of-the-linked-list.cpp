// http://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

node * nnode(int x)
{
  node *n=(struct node *)malloc(sizeof(struct node));
  n->data=x;
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
  node *temp1=root;
  temp=root;
  while(temp1!=NULL && temp1->next!=NULL)
  {
    temp=temp->next;
    temp1=temp1->next->next;
  }
  cout<<temp->data<<"\n";
  return 0;
}
