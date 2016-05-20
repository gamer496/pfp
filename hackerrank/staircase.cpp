#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/staircase

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        for(int k=0;k<n-i-1;k++)
            {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
            {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
