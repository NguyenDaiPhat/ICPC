#include<bits/stdc++.h>
using namespace std;
map<long long,long long> pt(long long n)
{
    map<long long,long long> ans;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
                ans[i]++;
                n/=i;
        }
    }
    if(n>1)ans[n]=1;
    return ans;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    map<long long,long long> ma=pt(m);
    map<long long,long long> luu;
    for(auto [u,v]:ma){
        int mu=1;
        while(n/pow(u,mu)){
            luu[u]+=n/pow(u,mu);
            mu++;
        }
    }

    long long min1=LLONG_MAX;
    for(auto [u,v]:luu){
        auto it=ma.find(u);
        if(v<it->second){cout<<-1;return 0;}
        min1=min(min1,v/it->second);
    }
    cout<<min1;
    return 0;
}
