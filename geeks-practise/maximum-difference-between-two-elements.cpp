#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/maximum-difference-between-two-elements/

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int lea=a[n-1];
        int mx=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>lea)
            {
                lea=a[i];
                continue;
            }
            else
            {
                mx=max(mx,lea-a[i]);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
