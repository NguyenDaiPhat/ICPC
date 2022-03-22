#include<bits/stdc++.h>
using namespace std;
vector<long long> a;
vector<long long>b;
void init()
{
    queue<string> q;
    q.push("9");
    a.push_back(9);
    while(1){
        string top=q.front();
        if(top.size()==11)break;
        q.pop();
        a.push_back(stoll(top+'0'));
        a.push_back(stoll(top+'9'));
        q.push(top+'0');
        q.push(top+'9');
    }
    for(int i=1;i<=100;i++)
    for(long long x:a){
        if(x%i==0){b.push_back(x);break;}
    }
}
int main()
{
    int t,n;
    cin>>t;
    init();
    while(t--){
        cin>>n;
        cout<<b[n-1]<<endl;
    }
    return 0;
}
