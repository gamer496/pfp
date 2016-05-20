#include<bits/stdc++.h>
using namespace std;

int dp[100][10000];
int n;

// http://www.geeksforgeeks.org/dynamic-programming-set-10-0-1-knapsack-problem/

void init()
{
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<10000;j++)
		{
			dp[i][j]=-1;
		}
	}
}

int solve(int i,int wt[],int val[],int curr_wei,int maxw)
{
	if(curr_wei>maxw)
	{
		return 0;
	}
	else if(i==n)
	{
		return 0;
	}
	else if(dp[i][curr_wei]!=-1)
	{
		return dp[i][curr_wei];
	}
	else
	{
		if(curr_wei+wt[i]<=maxw)
		{
			return dp[i][curr_wei]=max(solve(i+1,wt,val,curr_wei,maxw),solve(i+1,wt,val,curr_wei+wt[i],maxw)+val[i]);
		}
		else
		{
			return dp[i][curr_wei]=solve(i+1,wt,val,curr_wei,maxw);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		init();
		cin>>n;
		int wt[n],val[n];
		for(int i=0;i<n;i++)
		{
			cin>>wt[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>val[i];
		}
		int maxw;
		cin>>maxw;
		int k=solve(0,wt,val,0,maxw);
		cout<<k<<"\n";
	}
	return 0;
}
