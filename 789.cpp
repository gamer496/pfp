#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        point l1,r1,l2,r2;
        cin>>l1.x>>l1.y>>r1.x>>r1.y;
        cin>>l2.x>>l2.y>>r2.x>>r2.y;
        if(l2.x > r1.x || l1.x > r2.x)
        {
            cout<<"0\n";
        }
        else if(r1.y > l2.y || r2.y > l1.y)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}
