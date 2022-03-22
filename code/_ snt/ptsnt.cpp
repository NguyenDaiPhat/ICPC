#include<bits/stdc++.h>
using namespace std;
void pt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        while(n%i==0){
            if(n/i!=1)cout<<i<<"*";
            else cout<<i;
            n/=i;
        }
    if(n!=1)cout<<n;
}
int demuoc(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)dem+=2;
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n;
    pt(n);cout<<"\n";
    m=demuoc(n);
    //if(sqrt(n)*sqrt(n)==n)m+=10;
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            cout << m-1;///kt so chinh phuong
            return 0;
        }
        ++i;
    }
    cout<<m;
    return 0;
}
