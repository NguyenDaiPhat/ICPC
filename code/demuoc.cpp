#include<bits/stdc++.h>
using namespace std;
int uoc(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)dem+=2;
    return dem;
}
int main()
{
    int n;cin>>n;
    cout<<uoc(n);
    return 0;
}
