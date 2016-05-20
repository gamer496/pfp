#include<bits/stdc++.h>
using namespace std;

int dp[100][10000];
int n;

// http://www.geeksforgeeks.org/dynamic-programming-set-13-cutting-a-rod/


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

int solve(int val[],int i,int curr_len)
{
	if(i==n+1)
	{
		return 0;
	}
	else if(curr_len==n)
	{
		return 0;
	}
	else if(dp[i][curr_len]!=-1)
	{
		return dp[i][curr_len];
	}
	else
	{
		if(i+curr_len>=n)
		{
			return val[n-curr_len-1];
		}
		else
		{
			return dp[i][curr_len]=max(solve(val,i,curr_len+i)+val[i-1],solve(val,i+1,curr_len));
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
		int val[n];
		for(int i=0;i<n;i++)
		{
			cin>>val[i];
		}
		int k=solve(val,1,0);
		cout<<k<<"\n";
	}
	return 0;
}
