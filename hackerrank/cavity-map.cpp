#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

bool b[110][110];

//https://www.hackerrank.com/challenges/cavity-map

int main()
{
	int n;
	char a[110][110];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1])
			{
				b[i][j]=true;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i][j]==true)
			{
				printf("X");
			}
			else
			{
				int k=(a[i][j]-48);
				printf("%d",k);
			}
		}
		printf("\n");
	}
	return 0;
}
