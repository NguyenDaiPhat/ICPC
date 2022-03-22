#include<bits/stdc++.h>
using namespace std;
#define N 1000000007
int tohop(int k,int n)
{
    int t=1,t1=1;
    for(int i=1;i<=k;i++){
        t*=n-k+i;
        t1*=i;
    }
    return t/t1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        for(int i=0;i<=x;i++)cout<<tohop(i,x)<<" ";
        cout<<"\n";
    }
    return 0;
}
