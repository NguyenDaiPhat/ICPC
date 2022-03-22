#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    if(n<=3){cout<<n;return 0;}
    if(n==4){cout<<1;return 0;}
    if(n<=7){cout<<n-3;return 0;}
    if(n>7)cout<<4;
    return 0;
}

