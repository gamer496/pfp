#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/write-a-c-program-to-reverse-digits-of-a-number/

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int k=0;
	while(n)
	{
		k=(n%10)+k*10;
		n/=10;
	}
	cout<<k<<"\n";
	return 0;
}
