#include<bits/stdc++.h>
using namespace std;
long long tong(long long n)
{
    long long T=0;
    while(n){
        T+=n/2;
        n/=2;
    }
    return T;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    cout<<tong(m)-tong(n-1);
    return 0;
}
