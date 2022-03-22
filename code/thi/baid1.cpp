#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a[500001],d=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    deque<int>de;
    map<int,int>ma;
    for(int i=1;i<=n;i++)
    {
        ma[a[i]]++;
        if(ma[a[i]]<=2)de.push_back(a[i]);
        else {
                d+=de.size();
                while(ma[a[i]]>2){
                        ma[de.front()]--;
                        de.pop_front();
                        if(ma[a[i]]>2)d+=de.size();
                }
                de.push_back(a[i]);
             }
        if(i==n)d+=(1+de.size())*de.size()/2;
    }
    cout<<d;
    return 0;
}


