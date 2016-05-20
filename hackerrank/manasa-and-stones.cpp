#include<cstdio>
#include<iostream>
using namespace std;

//https://www.hackerrank.com/challenges/manasa-and-stones

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,n,sum,t;
		scanf("%d %d %d",&n,&a,&b);
		if(a==b)
		{
			printf("%d\n",(n-1)*a);
			continue;
		}
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}
		for(int i=0;i<n;i++)
		{
			sum=(n-1-i)*a+i*b;
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}
