#include<bits/stdc++.h>
using namespace std;
#define INF 9999

// http://www.geeksforgeeks.org/dynamic-programming-set-16-floyd-warshall-algorithm/

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==-1)
				{
					a[i][j]=INF;
				}
			}
		}
		int dp[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				dp[i][j]=a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					if(dp[i][j]>dp[i][k]+dp[k][j])
					{
						dp[i][j]=dp[i][k]+dp[k][j];
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
