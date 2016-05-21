// http://www.geeksforgeeks.org/equilibrium-index-of-an-array/
#include<bits/stdc++.h>
using namespace std;

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
  int l[n],r[n];
  l[0]=0;
  for(int i=1;i<n;i++)
  {
    l[i]=l[i-1]+a[i-1];
  }
  r[n-1]=0;
  for(int i=n-2;i>=0;i--)
  {
    r[i]=r[i+1]+a[i+1];
  }
  for(int i=0;i<n;i++)
  {
    if(l[i]==r[i])
    {
      cout<<i<<"\n";
      break;
    }
  }
  return 0;
}
