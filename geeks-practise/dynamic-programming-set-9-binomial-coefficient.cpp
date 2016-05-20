#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

// http://www.geeksforgeeks.org/dynamic-programming-set-9-binomial-coefficient/

int solve(int n,int k)
{
	if(n==k)
	{
		return 1;
	}
	else if(k==0)
	{
		return 1;
	}
	else if(dp[n][k]!=-1)
	{
		return dp[n][k];
	}
	else
	{
		return dp[n][k]=solve(n-1,k-1)+solve(n-1,k);
	}
}


void init()
{
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			dp[i][j]=-1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	init();
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		solve(n,k);
		cout<<dp[n][k]<<"\n";
	}
	return 0;
}
