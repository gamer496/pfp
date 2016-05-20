#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/


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
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0)
			{
				flag=true;
			}
		}
		int mx=0;
		if(flag==false)
		{
			mx=a[0];
			for(int i=0;i<n;i++)
			{
				mx=max(mx,a[i]);
			}
			cout<<mx<<"\n";
			continue;
		}
		int curr_sum=0;
		for(int i=0;i<n;i++)
		{
			curr_sum+=a[i];
			if(curr_sum<0)
			{
				curr_sum=0;
			}
			mx=max(curr_sum,mx);
		}
		cout<<mx<<"\n";
	}
	return 0;
}
