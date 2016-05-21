// http://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int a[n+2];
  for(int i=0;i<n+2;i++)
  {
    cin>>a[i];
  }
  bool f[n+1];
  for(int i=1;i<=n;i++)
  {
    f[i]=false;
  }
  for(int i=0;i<n+2;i++)
  {
    f[a[i]]=!f[a[i]];
  }
  for(int i=1;i<=n;i++)
  {
    if(f[i]==false)
    {
      cout<<i<<" ";
    }
  }
  return 0;
}
