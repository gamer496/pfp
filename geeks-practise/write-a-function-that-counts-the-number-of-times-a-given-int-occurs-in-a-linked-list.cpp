// http://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/
// http://www.practice.geeksforgeeks.org/edit-probfunc.php?pid=700019
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
  int k;
  cin>>k;
  temp=root;
  int cnt=0;
  while(temp!=NULL)
  {
    cnt+=(temp->data==k);
    temp=temp->next;
  }
  cout<<cnt<<"\n";
  return 0;
}
