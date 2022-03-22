#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    bool kt=true;
    int tong=0;
    getline(cin,s);
    while(s.length()%3)s='0'+s;
    for(int i=s.length()-3;i>=0;i-=3)
    {
        int x=stoi(s.substr(i,3));
        if(kt){tong+=x;kt=false;}
        else {tong-=x;kt=true;}
    }
    if(tong%13==0)cout<<"YES";
    else cout<<"NO";
    return 0;
}
