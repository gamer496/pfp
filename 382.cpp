#include <bits/stdc++.h>
using namespace std;

void comp(string s,int i,int j)
{
    if(i==j)
    {
        cout<<s<<" ";
    }
    else
    {
        for(int z=i;z<=j;z++)
        {
            char a = s[z];
            s[z] = s[i];
            s[i] = a;
            comp(s,z+1,j);
            a = s[z];
            s[z] = s[i];
            s[i] = a;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        comp(s,0,s.length());
    }
    return 0;
}
