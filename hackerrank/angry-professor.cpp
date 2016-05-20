#include<iostream>
#include<cstdio>
using namespace std;


// https://www.hackerrank.com/challenges/angry-professor


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,c=0,x;
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x<=0)
			{
				c++;
			}
		}
		c>=k?printf("NO\n"):printf("YES\n");
	}
	return 0;
}
