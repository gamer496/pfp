#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/level-order-tree-traversal/

node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void bfs(node *root)
{
	queue<node *>q;
	q.push(root);
	while(!q.empty())
	{
		node *temp=q.front();
		q.pop();
		if(temp==NULL)
		{
			continue;
		}
		cout<<temp->data<<"\n";
		if(temp->left!=NULL)
		{
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			q.push(temp->right);
		}
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
	bfs(root);
	return 0;
}
