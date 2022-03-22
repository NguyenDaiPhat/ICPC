#include<bits/stdc++.h>
using namespace std;
long long fibo(int n)
{
    if(n==2)return 1;
    return (1/sqrt(5))*(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n));
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cout<<fibo(i)<<" ";
    return 0;
}
