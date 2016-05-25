// http://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/
#include<bits/stdc++.h>
using namespace std;

struct node
{
  char data;
  struct node *next;
};

node * nnode(char a)
{
  node *n=(struct node *)malloc(sizeof(struct node));
  n->data=a;
  n->next=NULL;
  return n;
}

bool check(node *root)
{
  node *temp=root;
  stack<char>s;
  while(temp!=NULL)
  {
    s.push(temp->data);
    temp=temp->next;
  }
  temp=root;
  bool flag=true;
  while(temp!=NULL)
  {
    if(temp->data!=s.top())
    {
      flag=false;
      break;
    }
    temp=temp->next;
    s.pop();
  }
  return flag;
}

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  node *root=NULL,*temp=NULL;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    if(root==NULL)
    {
      root=nnode(s[0]);
      temp=root;
    }
    else
    {
      temp->next=nnode(s[0]);
      temp=temp->next;
    }
  }
  if(check(root))
  {
    cout<<"Yes\n";
  }
  else
  {
    cout<<"No\n";
  }
  return 0;
}
