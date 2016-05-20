#include<cstdio>
#include<iostream>
using namespace std;

int a[100000];

// https://www.hackerrank.com/challenges/service-lane

//can be by rmq but i'm too lazy
int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(t--)
	{
		int k=3;
		int x,y;
		scanf("%d %d",&x,&y);
		for(int i=x;i<=y;i++)
		{
			if(a[i]==2)
			{
				k=2;
			}
			else if(a[i]==1)
			{
				k=1;
				break;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}
