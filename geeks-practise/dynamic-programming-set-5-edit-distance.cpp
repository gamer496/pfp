#include<bits/stdc++.h>
using namespace std;

int dp[110][110];


// http://www.practice.geeksforgeeks.org/problem-page.php?pid=164
// http://www.geeksforgeeks.org/dynamic-programming-set-5-edit-distance/

int solve(string s1,string s2,int i,int j)
{
	if(i==-1 && j==-1)
	{
		return 0;
	}
	if(i==-1)
	{
		return j+1;
	}
	else if(j==-1)
	{
		return i+1;
	}
	else if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	else
	{
		if(s1[i]==s2[j])
		{
			return dp[i][j]=solve(s1,s2,i-1,j-1);
		}
		else
		{
			return dp[i][j]=min(solve(s1,s2,i,j-1),min(solve(s1,s2,i-1,j),solve(s1,s2,i-1,j-1)))+1;
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
		string s1,s2;
		cin>>n>>m;
		cin>>s1>>s2;
		int k=solve(s1,s2,n-1,m-1);
		cout<<k<<"\n";
	}
	return 0;
}
