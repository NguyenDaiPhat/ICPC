#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a[500001],d=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        map<int,int> ma;
        for(int j=i;j<=n;j++)
        {
            ma[a[j]]++;
            if(ma[a[j]]>2)break;
            else d++;
        }
    }
    cout<<d;
    //for(auto x:ma)cout<<x.first()<<" "<<x.second();
    return 0;
}


