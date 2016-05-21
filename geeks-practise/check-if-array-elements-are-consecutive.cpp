// www.geeksforgeeks.org/check-if-array-elements-are-consecutive/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  set<int>s;
  int mn=a[0],mx=a[0];
  for(int i=0;i<n;i++)
  {
    s.insert(a[i]);
    mn=min(a[i],mn);
    mx=max(mx,a[i]);
  }
  if((mx-mn+1)==s.size())
  {
    cout<<"yes\n";
  }
  else
  {
    cout<<"no\n";
  }
  return 0;
}
