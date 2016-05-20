#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/

node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void solve(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	else
	{
		solve(temp->left);
		solve(temp->right);
		node *temp1;
		temp1=temp->left;
		temp->left=temp->right;
		temp->right=temp1;
	}
}

void pprint(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	else
	{
		cout<<temp->data<<"\n";
		pprint(temp->left);
		pprint(temp->right);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(1);
	root->left=nnode(3);
	root->right=nnode(2);
	root->right->left=nnode(5);
	root->right->right=nnode(4);
	solve(root);
	pprint(root);
	return 0;
}
