#include<cstdio>
#include<iostream>
using namespace std;

// https://www.hackerrank.com/challenges/cut-the-sticks


int a[1010];

int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		++a[x];
	}
	printf("%d\n",n);
	for(int i=1;i<1001;i++)
	{
		if(a[i])
		{
			n-=a[i];
			if(n==0)
			{
				break;
			}
			printf("%d\n",n);
		}
	}
	return 0;
}
