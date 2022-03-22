#include<bits/stdc++.h>
using namespace std;
* tong(int n, int a[100])
{
    int d[n];
    for(int i=0;i<n;i++)d[i]+=1;
    return d;
}
int main(){
    int n;
    cin>>n;
    int a[100],b[100];
    b=tong(n,a);
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
    return 0;
}
