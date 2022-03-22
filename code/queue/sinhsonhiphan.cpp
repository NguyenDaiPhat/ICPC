#include<bits/stdc++.h>
using namespace std;
vector<string> a;
void init()
{
    queue<string> q;
    q.push("1");
    a.push_back("1");
    while(a.size()<=10000){
        string top=q.front();
        q.pop();
        a.push_back(top+'0');
        a.push_back(top+'1');
        q.push(top+'0');
        q.push(top+'1');
    }
}
int main()
{
    int t,n;
    cin>>t;
    init();
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
