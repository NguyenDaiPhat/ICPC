#include<bits/stdc++.h>
using namespace std;
map<int,int> pt(int n)
{
    map<int,int> ans;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
                ans[i]++;
                n/=i;
        }
    }
    if(n>1)ans[n]=1;
    return ans;
}
long long tong(int n,map<int,int>ans)
{
    long long Tong=1;
    for(auto [u,v]:ans){
        Tong*=(pow(u,v+1)-1)/(u-1);
    }
    return Tong;
}
int uoc(int n,map<int,int>ans)
{
    int Uoc=1;
    for(auto [u,v]:ans){
        Uoc*=(v+1);
    }
    return Uoc;
}
int main()
{
    int q;
    cin>>q;
    while(q--){
        int a,b;
        long long Tong=0,Uoc=0;
        cin>>a>>b;
        map<int,int>ma;
        for(int i=a;i<=b;i++){
            Tong+=tong(i,pt(i));
            Uoc+=uoc(i,pt(i));
        }
        cout<<Uoc<<" "<<Tong<<endl;
    }
    return 0;
}
