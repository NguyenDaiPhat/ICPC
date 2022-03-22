#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,q,dem=0;
    cin>>n>>x>>q;
    int a[n+9]{};
    long long b[n+9]{};
    for(int i=1;i<=n;i++)cin>>a[i];
    b[0]=0;
    for(int i=1;i<=n;i++)b[i]=b[i-1]+a[i];
    while(q--){
        int u,v;
        cin>>u>>v;
        if (b[v]-b[u-1]<x)dem++;
    }
    cout<<dem;
    return 0;
}
