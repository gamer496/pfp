#include<bits/stdc++.h>
using namespace std;

//http://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/

int main()
{
    ios::sync_with_stdio(false);
    int n,d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    int k=d%n;
    for(int i=k;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
