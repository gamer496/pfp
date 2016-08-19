#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/bear-and-workbook

int main()
{
  int n,p;
  cin>>n>>p;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int page_no=1;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    int prev_ques=0;
    int next_ques=0;
    int k=a[i];
    while(k)
    {
      // cout<<k<<" "<<page_no<<"\n";
      if(k>=p)
      {
        next_ques=prev_ques+p;
        k-=p;
      }
      else
      {
        next_ques=prev_ques+k;
        k=0;
      }
      if(prev_ques<page_no && next_ques>=page_no)
      {
        cnt++;
      }
      page_no++;
      prev_ques=next_ques;
    }
  }
  cout<<cnt<<"\n";
  return 0;
}
