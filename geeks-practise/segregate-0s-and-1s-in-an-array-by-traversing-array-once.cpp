#include<bits/stdc++.h>
using namespace std;

//http://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

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
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l]==0)
        {
            l++;
            continue;
        }
        else if(a[r]==1)
        {
            r--;
            continue;
        }
        else
        {
            a[l]=0;
            a[r]=1;
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
