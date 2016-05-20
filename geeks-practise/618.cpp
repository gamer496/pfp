#include<bits/stdc++.h>
using namespace std;


// http://www.geeksforgeeks.org/618/

struct node
{
	int data;
	struct node *left,*right;
};

node * nnode(int val)
{
	node *n=(struct node*)malloc(sizeof(node));
	n->data=val;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void inorder(node * temp)
{
	if(temp==NULL)
	{
		return ;
	}
	inorder(temp->left);
	cout<<temp->data<<"\n";
	inorder(temp->right);
}

void preorder(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	cout<<temp->data<<"\n";
	preorder(temp->left);
	preorder(temp->right);
}

void postorder(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	postorder(temp->left);
	postorder(temp->right);
	cout<<temp->data<<"\n";
}

int main()
{
	ios::sync_with_stdio(false);
	node *root=nnode(1);
	root->left=nnode(2);
	root->left->left=nnode(4);
	root->left->right=nnode(5);
	root->right=nnode(3);
	cout<<"Inorder traversal\n";
	inorder(root);
	cout<<"\nPreorder traversal\n";
	preorder(root);
	cout<<"\npostorder traversal\n";
	postorder(root);
	return 0;
}
