#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int main()
{
    int n;cin>>n;
    if(kt(n))cout<<"n la snt";
    else cout<<"n ko phai snt";
    return 0;
}
