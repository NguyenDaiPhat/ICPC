#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;///
    int a[n];
    for(int &x:a)cin>>x;///
    int pre[n+1]{0};
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+a[i];
    int l,r;
    cin>>l>>r;///
    cout<<pre[r]-pre[l-1];
    return 0;
}
N
