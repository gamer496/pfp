#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/leaders-in-an-array/

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int lea=a[n-1];
  cout<<lea<<" ";
  for(int i=n-2;i>=0;i--)
  {
    if(lea<a[i])
    {
      cout<<a[i]<<" ";
      lea=a[i];
    }
  }
  cout<<"\n";
  return 0;
}
