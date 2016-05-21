#include<bits/stdc++.h>
using namespace std;

//www.geeksforgeeks.org/find-the-first-missing-number/

int fmis(int a[],int s,int e)
{
    if(s>e)
    {
        return e+1;
    }
    else if(s!=a[s])
    {
        return s;
    }
    else
    {
        int m=(s+e)/2;
        if(a[m]>m)
        {
            return fmis(a,s,m);
        }
        else
        {
            return fmis(a,m+1,e);
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<fmis(a,0,n-1)<<"\n";
    return 0;
}
