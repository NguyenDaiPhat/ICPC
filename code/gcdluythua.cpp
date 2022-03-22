#include<bits/stdc++.h>
using namespace std;
map<int,int> pt(int n)
{
    map<int,int>ans;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            int dem=0;
            while(n%i==0)dem++,n/=i;
            ans[i]=dem;
        }
    }
    if(n>1)ans[n]=1;
    return ans;
}
int main()
{
    int a,b,n;
    long long kq=1;
    cin>>a>>b>>n;
    map<int,int> x=pt(a);
    map<int,int> y=pt(b);
    for(auto [u,v]:y)
    {
        auto it=x.find(u);
        if(it!=x.end()){
            int min1=min(it->second * n, v);
            while(min1--)kq*=u;
        }
    }
    cout<<kq;
    return 0;
}
