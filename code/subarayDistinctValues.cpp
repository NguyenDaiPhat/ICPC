#include <bits/stdc++.h>
using namespace std;
void nxn(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    nxn();
    int n,k;
    map<int,int> ma;
    queue<int>q;
    cin>>n>>k;
    int a[n];
    for(auto &x:a)cin>>x;
    int i=0;
    while(ma.size()<k){
        ma[a[i]]++;
        q.push(a[i]);
        i++;
    }
    int dem=n;
    //cout<<i;
    while(i<n){
        if(ma.size()==k)dem+=q.size()-1;
        //while((*ma.find(q.front())).second-1)
        while(ma.size()<k){
            q.push(a[i]);
            ma[a[i]]++;
        }

    }
    cout<<dem;
    return 0;
}

