#include<bits/stdc++.h>
using namespace std;


// http://www.geeksforgeeks.org/ugly-numbers/


int ugly[500];

void pre()
{
	ugly[0]=1;
	int mul2=2,mul3=3,mul5=5;
	int i2=0,i3=0,i5=0;
	for(int i=1;i<500;i++)
	{
		int mn=min(min(mul2,mul3),mul5);
		ugly[i]=mn;
		if(mn==mul2)
		{
			i2++;
			mul2=ugly[i2]*2;
		}
		if(mn==mul3)
		{
			i3++;
			mul3=ugly[i3]*3;
		}
		if(mn==mul5)
		{
			i5++;
			mul5=ugly[i5]*5;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	pre();
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<ugly[n-1]<<"\n";
	}
	return 0;
}
