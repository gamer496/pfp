#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/write-a-c-program-to-delete-a-tree/

node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
}

void solve(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	solve(temp->left);
	solve(temp->right);
	cout<<temp->data<<"\n";
	free(temp);
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(1);
	root->left=nnode(2);
	root->left->left=nnode(4);
	root->left->right=nnode(5);
	root->right=nnode(3);
	solve(root);
	return 0;
}
