#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/

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
		int dp[n+10];
		for(int i=0;i<=n;i++)
		{
			dp[i]=0;
		}
		dp[0]=a[0];
		dp[1]=max(dp[0],a[1]);
		for(int i=2;i<n;i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n-1]<<"\n";
	}
	return 0;
}
