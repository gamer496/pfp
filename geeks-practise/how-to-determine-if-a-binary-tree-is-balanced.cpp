#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/

node *newNode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}


bool solve(node *temp,int *height)
{
	if(temp==NULL)
	{
		*height=0;
		return true;
	}
	else
	{
		int lh=0,rh=0;
		bool flag1=solve(temp->left,&lh);
		bool flag2=solve(temp->right,&rh);
		*height=max(lh,rh)+1;
		int diff=abs(lh-rh);
		bool flag3;
		if(diff>1)
		{
			flag3=false;
		}
		else
		{
			flag3=true;
		}
		return (flag1&&flag2)&&flag3;
	}
}


int main()
{
	ios::sync_with_stdio(false);
struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->left->left->left = newNode(7);
  root->left->left->left->left=newNode(8);
  // root->left->left->left->left->left=newNode(9);
	int height=0;
	bool flag=solve(root,&height);
	cout<<flag<<"\n";
	return 0;
}
