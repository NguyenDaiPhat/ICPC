#include<bits/stdc++.h>
using namespace std;
void pt(int n,map<int,int> &a)
{
    for(int i=2;i<=sqrt(n);i++)
        while(n%i==0){
            a[i]++;
            n/=i;
        }
    if(n!=1)a[n]++;
}
int main()
{
    int n,m;
    map<int,int>a,b;
    cin>>n>>m;
    pt(m,b);
    for(int i=2;i<=n;i++)pt(i,a);
    int min1=INT_MAX;
    for(auto i=b.begin();i!=b.end();i++)
        if(a.find((*i).first)!=a.end()){
            auto it=a.find((*i).first);
            min1=min(min1,(*it).second/(*i).second);
        }
        else{
            cout<<-1;
            return 0;
        }
    cout<<min1;
    return 0;
}

