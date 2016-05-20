#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/diagonal-difference

int main() {
    int n;
    cin>>n;
    int sum1=0,sum2=0,x;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>x;
            if(i==j)
                {
                sum1+=x;
            }
            if(i+j==n-1)
                {
                sum2+=x;
            }
        }
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}
