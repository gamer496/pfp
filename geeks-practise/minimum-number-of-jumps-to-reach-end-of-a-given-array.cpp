#include<bits/stdc++.h>
using namespace std;

int dp[1000];


// http://www.practice.geeksforgeeks.org/problem-page.php?pid=153
// www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array

void init()
{
	for(int i=0;i<1000;i++)
	{
		dp[i]=INT_MAX;
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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		if(a[0]==0)
		{
			dp[0]=INT_MAX;
		}
		else
		{
			dp[0]=0;
		}

		for(int i=0;i<n;i++)
		{
			if(dp[i]==INT_MAX)
			{
				continue;
			}
			for(int j=i;j<min(n,a[i]+i+1);j++)
			{
				dp[j]=min(dp[j],dp[i]+1);
			}
		}

		if(dp[n-1]==INT_MAX)
		{
			dp[n-1]=-1;
		}
		cout<<dp[n-1]<<"\n";
	}
	return 0;
}
