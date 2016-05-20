#include<bits/stdc++.h>
using namespace std;

int a[10][10];
int dp[10][10];

// http://www.geeksforgeeks.org/dynamic-programming-set-6-min-cost-path/

int solve(int i,int j)
{
	if(i==0 && j==0)
	{
		return a[i][j];
	}
	else if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	else
	{
		if(i==0)
		{
			return dp[i][j]=a[i][j]+solve(i,j-1);
		}
		else if(j==0)
		{
			return dp[i][j]=a[i][j]+solve(i-1,j);
		}
		else
		{
			return dp[i][j]=a[i][j]+min(solve(i-1,j-1),min(solve(i-1,j),solve(i,j-1)));
		}
	}
}

void init()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			dp[i][j]=a[i][j]=-1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t;cin>>t;
	while(t--)
	{
		init();
		int n,m;
		int r,c;
		cin>>r>>c;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin>>a[i][j];
			}
		}
		cin>>n>>m;
		int k=solve(m,n);
		cout<<k<<"\n";
	}
	return 0;
}
