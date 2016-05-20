#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/write-a-c-program-to-get-count-of-leaf-nodes-in-a-binary-tree/

node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

int solve(node *temp)
{
	if(temp==NULL)
	{
		return 0;
	}
	else if(temp->left==NULL && temp->right==NULL)
	{
		return 1;
	}
	else
	{
		return solve(temp->left)+solve(temp->right);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(1);
	root->left=nnode(2);
	root->left->left=nnode(4);
	root->left->right=nnode(5);
	root->right=nnode(3);
	int k=solve(root);
	cout<<k<<"\n";
	return 0;
}
