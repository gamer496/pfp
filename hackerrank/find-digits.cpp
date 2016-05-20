#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/find-digits

char a[250];
int n;
int array[] = {1,3,2,-1,-3,-2};

bool isdivisible(int k,int sum)
{
	switch(k)
	{
		case 0:{return false;
				break;}
		case 1:{return true;
				break;}
		case 2:{if((a[n-1]-48)%2==0)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		case 3:{if(sum%3==0)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		case 4:{int p=1,no=0;
				for(int i=n-1;i>=0 && n-1-i<2;i--)
				{
					no+=(p*(a[i]-48));
					p*=10;
				}
				if(no%4==0)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		case 5:{if(a[n-1]=='5' || a[n-1]=='0')
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		case 6:{if(a[n-1]%2==0 && sum%3==0)
				{
					return true;
				}
				else
				{
					return false;
				}}
		case 7:{int numk,k = 0,nsum = 0;
     			for(int j = n-1; j >=0 ; j--)
     			{
		  			  numk = a[j] - 48;
					  nsum += array[k]*numk;
					  k = (k+1)%6;
				}
     			if(nsum% 7 == 0)
     			{
     				return true;
     			}
     			else
     			{
     				return false;
     			}
     			break;}
		case 8:{int p=1,no=0;
				for(int i=n-1;i>=0 && n-1-i<3;i--)
				{
					no+=(p*(a[i]-48));
					p*=10;
				}
				if(no%8==0)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		case 9: {if(sum%9==0)
				{
					return true;
				}
				else
				{
					return false;
				}
				break;}
		default: return true;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		n=strlen(a);
		bool b[10]={false};
		int d[10]={0};
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=(a[i]-48);
		}
		for(int i=0;i<n;i++)
		{
			if((b[a[i]-48])==false)
			{
				b[a[i]-48]=true;
				if(isdivisible(a[i]-48,sum))
				{
					++d[a[i]-48];
				}
			}
			else
			{
				if(d[a[i]-48])
					++d[a[i]-48];
			}
		}
		int count=0;
		for(int i=1;i<10;i++)
		{
			count+=d[i];
		}
		printf("%d\n",count);
	}
	return 0;
}
