#include<bits/stdc++.h>
using namespace std;

int dp[110][110];

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=152
// http://www.geeksforgeeks.org/dynamic-programming-set-4-longest-common-subsequence/

int solve(string s1,string s2,int i,int j)
{
	if(i==s1.length() || j==s2.length())
	{
		return 0;
	}
	else if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	else
	{
		if(s1[i]==s2[j])
		{
			return dp[i][j]=1+solve(s1,s2,i+1,j+1);
		}
		else
		{
			return dp[i][j]=max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
		}
	}
}

void init()
{
	for(int i=0;i<110;i++)
	{
		for(int j=0;j<110;j++)
		{
			dp[i][j]=-1;
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
		cin>>n>>m;
		string s1,s2;
		cin>>s1>>s2;
		int k=solve(s1,s2,0,0);
		cout<<k<<"\n";
	}
	return 0;
}
