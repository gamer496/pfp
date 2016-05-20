#include<bits/stdc++.h>
using namespace std;

map<int,int>sa;

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=434
// http://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/

bool comp(int a,int b)
{
	if(sa[a]==0)
	{
		sa[a]=20000;
	}
	if(sa[b]==0)
	{
		sa[b]=20000;
	}
	if(sa[a]==20000 && sa[b]==20000)
	{
		return a<b;
	}
	else
	{
		return sa[a]<sa[b];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			sa[x]=i+1;
		}
		sort(a,a+n,comp);
		int j=0;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		sa.clear();
		cout<<"\n";
	}
}
