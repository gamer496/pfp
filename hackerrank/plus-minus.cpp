#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

// https://www.hackerrank.com/challenges/plus-minus


int main() {
    int n;
    cin>>n;
    int c1=0,c2=0,c3=0,x;
    setprecision(3);
    for(int i=0;i<n;i++)
        {
        cin>>x;
        if(x<0)
            {
            ++c1;
        }
        else if(x==0)
            {
            ++c2;
        }
        else
            {
            ++c3;
        }
    }
    double k=c1+c2+c3;
    cout<<c3/k<<"\n"<<c1/k<<"\n"<<c2/k<<"\n";
    return 0;
}
