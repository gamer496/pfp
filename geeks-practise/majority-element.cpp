#include<bits/stdc++.h>
using namespace std;

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=305
// http://www.geeksforgeeks.org/majority-element/

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
		int cnt[100]={0};
		for(int i=0;i<n;i++)
		{
			cnt[a[i]]++;
		}
		bool flag=false;
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(cnt[a[i]]>n/2)
			{
				k=a[i];
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<k<<"\n";
		}
		else
		{
			cout<<"NO Majority Element\n";
		}
	}
	return 0;
}
