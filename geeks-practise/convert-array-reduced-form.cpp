#include<bits/stdc++.h>
using namespace std;

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=608
// http://www.geeksforgeeks.org/convert-array-reduced-form/

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
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		map<int,int>m;
		for(int i=0;i<n;i++)
		{
			m[a[i]]=i;
		}
		for(int i=0;i<n;i++)
		{
			cout<<m[b[i]]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
