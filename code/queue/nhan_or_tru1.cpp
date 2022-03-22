#include<bits/stdc++.h>
using namespace std;
int slove(int n, int m)
{
    queue<pair<int,int>> q;
    q.push({n,0});
    set<int> se;
    se.insert(n);
    while(!q.empty()){
        pair<int,int> top=q.front();
        q.pop();
        if(top.first==m)return top.second;
        //if(top.first*2==)
        if(se.find(top.first*2)==se.end() && top.first<m){
            q.push({top.first*2,top.second+1});
            se.insert(top.first*2);
        }
        if(se.find(top.first-1)==se.end() && top.first>1){
            q.push({top.first-1,top.second+1});
            se.insert(top.first-1);
        }
    }
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<slove(n,m)<<endl;
    }
    return 0;
}
