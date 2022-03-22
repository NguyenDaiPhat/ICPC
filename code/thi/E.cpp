#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m,max1=1;
    cin>>n>>m;
    int a[n+9], b[m+9];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
            cin>>b[i];
            max1=b[i]+a[1];
            for(int j=2;j<=n;j++){
                    max1=__gcd(max1,b[i]+a[j]);
                    if(max1==1)break;
            }
            cout<<max1<<" ";
    }
    return 0;
}

