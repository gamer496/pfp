#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

// http://www.geeksforgeeks.org/diameter-of-a-binary-tree/

node *nnode(int data)
{
	node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->right=NULL;
	n->left=NULL;
	return n;
}

int finddia(node *temp,int *mh)
{
	if(temp==NULL)
	{
		*mh=0;
		return 0;
	}
	else
	{
		int lh=0,rh=0;
		int th=0;
		int ldia=finddia(temp->left,&lh);
		int rdia=finddia(temp->right,&rh);
		*mh=max(lh,rh)+1;
		return max(lh+rh+1,max(ldia,rdia));
	}
}

int main()
{
	ios::sync_with_stdio(false);
	struct node *root = nnode(1);
  	root->left        = nnode(2);
  	root->right       = nnode(3);
  	root->left->left  = nnode(4);
  	root->left->right = nnode(5);
  	int mh=0;
  	int k=finddia(root,&mh);
  	cout<<k<<"\n";
  	return 0;
}
