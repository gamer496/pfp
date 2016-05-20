#include<bits/stdc++.h>
using namespace std;


// http://www.practice.geeksforgeeks.org/problem-page.php?pid=552
// http://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int cnt[1100]={0};
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			cnt[x]++;
		}
		bool flag=false;
		for(int i=0;i<1100;i++)
		{
			int j=k-i;
			if(j>1000)
			{
				continue;
			}
			if(cnt[i]==0)
			{
				continue;
			}
			if(j>0)
			{
				if(j==i)
				{
					if(cnt[i]>1)
					{
						flag=true;
						break;
					}
				}
				else
				{
					if(cnt[j]>=1)
					{
						flag=true;
						break;
					}
				}
			}
		}
		if(flag==true)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}
	return 0;
}
