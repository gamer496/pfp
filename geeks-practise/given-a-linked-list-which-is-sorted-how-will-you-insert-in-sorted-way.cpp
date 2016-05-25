// http://www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};


node *nnode(int x)
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
  int m;
  cin>>m;
  node *temp1=root;
  temp=root->next;
  if(temp1->data>m)
  {
    temp1=nnode(m);
    temp1->next=root;
    root=temp1;
  }
  else
  {
    bool flag=false;
    while(temp!=NULL)
    {
      if(temp->data>m)
      {
        temp1->next=nnode(m);
        temp1->next->next=temp;
        flag=true;
        break;
      }
      temp1=temp1->next;
      temp=temp->next;
    }
    if(flag==false)
    {
      temp1->next=nnode(m);
    }
  }
  temp=root;
  while(temp!=NULL)
  {
    cout<<temp->data<<"\n";
    temp=temp->next;
  }
  return 0;
}
