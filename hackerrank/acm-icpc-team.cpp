#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//https://www.hackerrank.com/challenges/acm-icpc-team

int main()
{
	char a[510][510];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	int b[500]={0};
	int max=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			int curr=0;
			for(int k=0;k<strlen(a[i]);k++)
			{
				if(a[i][k]==49 || a[j][k]==49)
				{
					++curr;
				}
			}
			if(curr>max)
			{
				max=curr;
			}
			++b[curr];
		}
	}
	printf("%d\n%d\n",max,b[max]);
	return 0;
}
