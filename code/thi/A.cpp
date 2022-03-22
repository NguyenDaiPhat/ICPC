#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    if(n==0)cout<<"YES\n"<<1<<" "<<1;
    //else if(n==1)cout<<"No";
    else if(n%2==1){
            if((n+1)/2>=1 && (n-1)/2>=1)cout<<"YES\n"<<(n+1)/2<<" "<<(n-1)/2;
            else cout<<"No";
    }
    else{
        if((n/2+2)%2==0 && (n/2+2)/2>=1 && (n/2-2)/2>=1)cout<<"YES\n"<<(n/2+2)/2<<" "<<(n/2-2)/2;
        else cout<<"No";
    }
    return 0;
}

