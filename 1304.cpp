#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k;
        cin>>k;
        int a[256]={0};
        for(int i=0;i<s.length();i++)
        {
            a[s[i]]++;
        }
        priority_queue< int, vector<int>, greater<int> >pq;
        for(int i=0;i<256;i++)
        {
            if(a[i])
            {
                pq.push(a[i]);
            }
        }
        while(k && !pq.empty())
        {
            int x=pq.top();
            pq.pop();
            pq.push(--x);
            --k;
        }
        int ans=0;
        while(!pq.empty())
        {
            int x=pq.top();
            ans+=(x*x);
            pq.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}
