#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/check-for-children-sum-property-in-a-binary-tree/

node * nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

bool solve(node *temp)
{
	if(temp==NULL)
	{
		return true;
	}
	else if(temp->left==NULL && temp->right==NULL)
	{
		return true;
	}
	else
	{
		int a=0,b=0;
		if(temp->left!=NULL)
		{
			a=temp->left->data;
		}
		if(temp->right!=NULL)
		{
			b=temp->right->data;
		}
		if(temp->data!=(a+b))
		{
			return false;
		}
		else
		{
			return solve(temp->left)&&solve(temp->right);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(10);
	root->left=nnode(8);
	root->left->left=nnode(3);
	root->left->right=nnode(5);
	root->right=nnode(2);
	root->right->left=nnode(2);
	bool flag=solve(root);
	cout<<flag<<"\n";
	return 0;
}
