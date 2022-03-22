#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,n,r,d=0;
    cin>>p>>n>>r;
    int d1=n;
    while(d1<=p){
        if(d1>p)break;
        n*=r;
        d1+=n;
        d++;
    }
    cout<<d;
    return 0;
}

