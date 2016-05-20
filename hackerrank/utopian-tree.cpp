#include<cstdio>
#include<iostream>
using namespace std;

// https://www.hackerrank.com/challenges/utopian-tree

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		long long height=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			if(i%2)
			{
				height+=1;
			}
			else
			{
				height*=2;
			}
		}
		printf("%lld\n",height);
	}
	return 0;
}
