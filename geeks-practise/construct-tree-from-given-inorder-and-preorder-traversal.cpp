// http://www.geeksforgeeks.org/construct-tree-from-given-inorder-and-preorder-traversal/
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int val;
  node *left,*right;
};

node *nnode(int val)
{
  node *n=new node;
  n->val=val;
  n->left=NULL;
  n->right=NULL;
  return n;
}

node * build(vector<int>&in,vector<int>&pr,int st,int ed)
{
  static int pind=0;
  if(st>ed)
  {
    return NULL;
  }
  if(st==ed)
  {
    node *n=nnode(pr[pind]);
    pind++;
    return n;
  }
  int k;
  for(int i=0;i<pr.size();i++)
  {
    if(in[i]==pr[pind])
    {
      k=i;
      break;
    }
  }
  node *n=nnode(pr[pind]);
  pind++;
  n->left=build(in,pr,st,k-1);
  n->right=build(in,pr,k+1,ed);
  return n;
}

void inorder(node *temp)
{
  if(temp==NULL)
  {
    return ;
  }
  inorder(temp->left);
  cout<<temp->val<<endl;
  inorder(temp->right);
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>in;
  vector<int>pr;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    in.push_back(x);
  }
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    pr.push_back(x);
  }
  node *root=build(in,pr,0,in.size()-1);
  // cout<<root->val<<endl;
  inorder(root);
  return 0;
}
