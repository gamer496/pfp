#include<bits/stdc++.h>
using namespace std;


// http://www.practice.geeksforgeeks.org/problem-page.php?pid=394
// http://www.geeksforgeeks.org/find-the-element-that-appears-once/

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
		int ans=a[0];
		for(int i=1;i<n;i++)
		{
			ans=ans^a[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
