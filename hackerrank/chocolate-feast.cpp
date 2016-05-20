#include<iostream>
#include<cstdio>
using namespace std;

//https://www.hackerrank.com/challenges/chocolate-feast

int main()
{
	int t;
	int n,c,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&c,&m);
		long long ans;
		ans=n/c;
		int uu,k;
		uu=ans;
		while(uu>=m)
		{
			k=uu/m;
			ans+=k;
			uu-=(k*m);
			uu+=k;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
