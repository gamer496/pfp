#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

node * newtNode(int data)
{
	node *n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

// http://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/

void inorder(node *temp)
{
	// cout<<"here"<<endl;
	stack<node *>s;
	s.push(temp);
	node *curr_node=temp->left;
	while(true)
	{
		if(curr_node!=NULL)
		{
			s.push(curr_node);
			curr_node=curr_node->left;
		}
		else
		{
			if(s.empty())
			{
				break;
			}
			else
			{
				node *temp1=s.top();
				s.pop();
				cout<<temp1->data<<"\n";
				curr_node=temp1->right;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	  struct node *root = newtNode(1);
  root->left        = newtNode(2);
  root->right       = newtNode(3);
  root->left->left  = newtNode(4);
  root->left->right = newtNode(5);
  inorder(root);
  return 0;
}
