#include<bits/stdc++.h>
using namespace std;


// http://www.geeksforgeeks.org/merge-one-array-of-size-n-into-another-one-of-size-mn/

int main()
{
  ios::sync_with_stdio(false);
  int m,n;
  cin>>m>>n;
  int a[m+n];
  int b[n];
  for(int i=0;i<m+n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
  int j=m+n-1;
  for(int i=m+n-1;i>=0;i--)
  {
    if(a[i]!=-1)
    {
      a[j]=a[i];
      j--;
    }
  }
  int i=0;
  j=n;
  int k=0;
  while(i<n && j<m+n)
  {
    if(a[j]<b[i])
    {
      a[k++]=a[j++];
    }
    else
    {
      a[k++]=b[i++];
    }
  }
  while(i<n)
  {
    a[k++]=b[i++];
  }
  while(j<m+n)
  {
    a[k++]=a[j++];
  }
  for(int f=0;f<m+n;f++)
  {
    cout<<a[f]<<" ";
  }
  cout<<"\n";
  return 0;
}
