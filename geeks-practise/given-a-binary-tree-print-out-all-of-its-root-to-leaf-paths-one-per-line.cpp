#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/given-a-binary-tree-print-out-all-of-its-root-to-leaf-paths-one-per-line/

struct node
{
	int data;
	struct node *left,*right;
};

node *nnode(int data)
{
	node *n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void solve(node *temp,vector<int> v)
{
	if(temp==NULL)
	{
		return ;
	}
	if(temp->left==NULL && temp->right==NULL)
	{
		vector<int>::iterator iter;
		for(iter=v.begin();iter!=v.end();iter++)
		{
			cout<<*iter<<" ";
		}
		cout<<temp->data<<"\n";
		return ;
	}
	v.push_back(temp->data);
	solve(temp->left,v);
	solve(temp->right,v);
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(1);
	root->left=nnode(2);
	root->left->left=nnode(4);
	root->left->right=nnode(5);
	root->right=nnode(3);
	vector<int> v;
	solve(root,v);
	return 0;
}
