#include<bits/stdc++.h>
using namespace std;


// http://www.geeksforgeeks.org/next-greater-element/


int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	stack<int>s;
	vector<int>ans;
	for(int i=n-1;i>=0;i--)
	{
		if(s.empty())
		{
			ans.push_back(-1);
			s.push(a[i]);
		}
		else
		{
			while(!s.empty() && a[i]>s.top())
			{
				s.pop();
			}
			if(s.empty())
			{
				ans.push_back(-1);
			}
			else
			{
				ans.push_back(s.top());
			}
			s.push(a[i]);
		}
	}
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
