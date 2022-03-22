#include<bits/stdc++.h>
using namespace std;
struct cmp
{
    bool operator()(int a,int b){
        return a>b;
    }
};
int main()
{
    map<int,int,cmp>a;
    a[1]++;
    a[3]=5;
    a[2]=7;
    for(auto x:a)cout<<x.second<<" ";
    return 0;
}

