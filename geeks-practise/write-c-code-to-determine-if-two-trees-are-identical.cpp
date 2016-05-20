#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/

struct node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}


bool solve(node *temp1,node *temp2)
{
	if(temp1==NULL && temp2==NULL)
	{
		return true;
	}
	else if(temp1==NULL || temp2==NULL)
	{
		return true;
	}
	else
	{
		if(temp1->data==temp2->data)
		{
			return solve(temp1->left,temp2->left)&&solve(temp1->right,temp2->right);
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	node *root1=nnode(1);
	node *root2=nnode(1);
	root1->left = nnode(2);
    root1->right = nnode(3);
    root1->left->left  = nnode(4);
    root1->left->right = nnode(5);

    root2->left = nnode(2);
    root2->right = nnode(3);
    root2->left->left = nnode(4);
    root2->left->right = nnode(5);
	bool ans=solve(root1,root2);
	if(ans==true)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	return 0;
}
