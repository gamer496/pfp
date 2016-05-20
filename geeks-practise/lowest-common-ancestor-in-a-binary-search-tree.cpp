#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/

node *newNode(int data)
{
	node *n=(struct node *)malloc(sizeof(struct node));
	n->left=NULL;
	n->right=NULL;
	n->data=data;
	return n;
}


node * solve(node *temp,int n1,int n2)
{
	if(temp==NULL)
	{
		return NULL;
	}
	else
	{
		if(temp->data<n1 && temp->data<n2)
		{
			return solve(temp->right,n1,n2);
		}
		if(temp->data>n1 && temp->data>n2)
		{
			return solve(temp->left,n1,n2);
		}
		return temp;
	}
}


int main()
{
	ios::sync_with_stdio(false);
 struct node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
	int n1,n2;
	cin>>n1>>n2;
	node *temp=solve(root,n1,n2);
	if(temp==NULL)
	{
		cout<<"None found\n";
	}
	else
	{
		cout<<temp->data<<"\n";
	}
	return 0;
}
