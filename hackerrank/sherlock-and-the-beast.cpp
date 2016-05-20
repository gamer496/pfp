#include<iostream>
#include<cstdio>
using namespace std;

// https://www.hackerrank.com/challenges/sherlock-and-the-beast

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a=0,b=0;
		while(((n-b*5)%3) && n>b*5)
		{
			b++;
		}
		if(n>=b*5)
		{
			for(int i=0;i<n-b*5;i++)
			{
				printf("5");
			}
			for(int i=0;i<b*5;i++)
			{
				printf("3");
			}
		}
		else
		{
			printf("-1");
		}
		printf("\n");
	}
	return 0;
}
