#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long q;
    cin>>q;
    while(q--){
        long long n;
        long long mu=0,dem=0;
        cin>>n;
        while(n){
                n/=5;
                dem+=n;
        }
        cout<<dem<<endl;
    }
    return 0;
}
