#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/

node *newnode(int data)
{
	node *n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

bool solve(node *temp,int reqsum,int curr_sum)
{
	if(temp==NULL)
	{
		return reqsum==curr_sum;
	}
	else
	{
		return solve(temp->left,reqsum,curr_sum+temp->data)||solve(temp->right,reqsum,curr_sum+temp->data);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
  int n;
  cin>>n;
  bool check=solve(root,n,0);
  if(check)
  {
  	cout<<"Yes\n";
  }
  else
  {
  	cout<<"No\n";
  }
  return 0;
}
