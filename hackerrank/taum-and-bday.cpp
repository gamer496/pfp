#include<iostream>
#include<cstdio>
using namespace std;

//https://www.hackerrank.com/challenges/taum-and-bday

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long w,b,p1,p2,c;
		scanf("%lld %lld %lld %lld %lld",&w,&b,&p1,&p2,&c);
		if(p1+c<p2)
		{
			printf("%lld\n",(w*p1+b*(p1+c)));
		}
		else if(p2+c<p1)
		{
			printf("%lld\n",(w*(p2+c)+b*p2));
		}
		else
		{
			printf("%lld\n",(w*p1+b*p2));
		}
	}
	return 0;
}
