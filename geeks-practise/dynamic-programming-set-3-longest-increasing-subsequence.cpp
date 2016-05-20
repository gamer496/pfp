#include<bits/stdc++.h>
using namespace std;


// http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/
// http://www.practice.geeksforgeeks.org/problem-page.php?pid=134

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int dp[n];
		for(int i=0;i<n;i++)
		{
			dp[i]=1;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>a[i])
				{
					dp[j]=max(dp[j],dp[i]+1);
				}
			}
		}
		int mx=dp[0];
		for(int i=0;i<n;i++)
		{
			mx=max(mx,dp[i]);
		}
		cout<<mx<<"\n";
	}
	return 0;
}
