// http://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

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
  node *temp=NULL,*root=NULL;
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
  node *temp1=root->next;
  temp=root;
  if(root->next==NULL)
  {
    free(root);
  }
  while(temp1!=NULL)
  {
    free(temp);
    temp=temp1;
    temp1=temp1->next;
  }
  cout<<"here"<<endl;
  return 0;
}
