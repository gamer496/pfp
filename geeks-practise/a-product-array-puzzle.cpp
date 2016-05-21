#include<bits/stdc++.h>
using namespace std;

//http://www.geeksforgeeks.org/a-product-array-puzzle/


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
        int l[n],r[n];
        l[0]=1;
        for(int i=1;i<n;i++)
        {
            l[i]=l[i-1]*a[i-1];
        }
        r[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            r[i]=r[i+1]*a[i+1];
        }
        int k;
        cin>>k;
        cout<<l[k]*r[k]<<"\n";
    }
    return 0;
}
