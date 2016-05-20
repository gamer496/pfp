#include<bits/stdc++.h>
using namespace std;

// http://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/


int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        bool z[10000]={false};
        for(int i=0;i<n+m;i++)
        {
            int k;
            cin>>k;
            z[k]=true;
        }
        vector<int> v;
        for(int i=0;i<10000;i++)
        {
            if(z[i]==true)
            {
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<"\n";
    }
    return 0;
}
