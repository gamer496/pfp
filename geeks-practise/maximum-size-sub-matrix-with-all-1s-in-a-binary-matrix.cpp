#include<bits/stdc++.h>
using namespace std;

// www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix


int main()
{
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  int dp[n][m];
  for(int i=0;i<n;i++)
  {
    dp[i][0]=a[i][0];
  }
  for(int j=0;j<m;j++)
  {
    dp[0][j]=a[0][j];
  }
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      if(a[i][j]==1)
      {
        dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
      }
      else
      {
        dp[i][j]=0;
      }
    }
  }
  int mx=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      mx=max(mx,dp[i][j]);
    }
  }
  cout<<mx<<"\n";
  return 0;
}
