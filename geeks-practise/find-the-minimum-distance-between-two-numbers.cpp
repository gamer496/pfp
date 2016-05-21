#include<bits/stdc++.h>
using namespace std;
#define INF 100000

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
    int x,y;
    cin>>x>>y;
    int temp=-1;
    int mn=INF;
    int ind;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x || a[i]==y)
        {
            if(temp==-1)
            {
                temp=a[i];
                ind=i;
            }
            else if(temp!=a[i])
            {
                temp=a[i];
                mn=min(mn,i-ind);
                ind=i;
            }
        }
    }
    cout<<mn<<"\n";
    return 0;
}
