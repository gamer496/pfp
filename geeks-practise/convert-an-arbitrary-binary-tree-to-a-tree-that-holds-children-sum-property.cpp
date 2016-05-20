#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};


// http://www.geeksforgeeks.org/convert-an-arbitrary-binary-tree-to-a-tree-that-holds-children-sum-property/

node *newNode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void mend(node *temp,int diff)
{
	if(temp->left!=NULL)
	{
		temp->left->data=temp->left->data+diff;
		mend(temp->left,diff);
	}
	else if(temp->right!=NULL)
	{
		temp->right->data=temp->right->data+diff;
		mend(temp->right,diff);
	}
}


void solve(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	else if(temp->left==NULL && temp->right==NULL)
	{
		return ;
	}
	else
	{
		solve(temp->left);
		solve(temp->right);
		int a=0,b=0;
		if(temp->left!=NULL)
		{
			a=temp->left->data;
		}
		if(temp->right!=NULL)
		{
			b=temp->right->data;
		}
		int diff=a+b-temp->data;
		if(diff>0)
		{
			temp->data=temp->data+diff;
		}
		if(diff<0)
		{
			mend(temp,-diff);
		}
	}
}



void inorder(node *temp)
{
	if(temp==NULL)
	{
		return ;
	}
	else
	{
		inorder(temp->left);
		cout<<temp->data<<"\n";
		inorder(temp->right);
	}
}

int main()
{
	ios::sync_with_stdio(false);
struct node *root = newNode(50);
  root->left        = newNode(7);
  root->right       = newNode(2);
  root->left->left  = newNode(3);
  root->left->right = newNode(5);
  root->right->left  = newNode(1);
  root->right->right = newNode(30);
  cout<<"Inorder before\n";
  inorder(root);
	solve(root);
	cout<<"Inorder after\n";
	inorder(root);
	return 0;
}
