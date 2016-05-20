#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=294
// http://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

vector<ll>v;
void pre()
{
	v.push_back(0);
	v.push_back(1);
	for(int i=2;i<1001;i++)
	{
		v.push_back((v[i-1]+v[i-2])%mod);
	}
}




int main()
{
	ios::sync_with_stdio(false);
	pre();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<"\n";
	}
	return 0;
}
