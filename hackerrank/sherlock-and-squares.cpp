#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

// https://www.hackerrank.com/challenges/sherlock-and-squares


int main()
{
	int t;
	long long a,b,i,k;
	scanf("%d",&t);
	while(t--)
	{
		int c=0;
		scanf("%lld %lld",&a,&b);
		i=sqrt(a);
		while(i*i<=b)
		{
			if(i*i>=a)
				++c;
			i++;
		}
		printf("%d\n",c);
	}
	return 0;
}
