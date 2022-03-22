#include <bits/stdc++.h>
using namespace std;
#define nxn ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int N, a, b,d=0;
int x;
long long S = 0;
map<long long,int> ma;
void xuly()
{
    cin >> N>>a>>b;
    ma[0]=0;
    long long ans = LLONG_MIN;
    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        S += x;
        /*for(auto it=ma.begin();it!=ma.end();it++){
            int luu=i-(*it).second;
            if(luu>=a && luu<=b){
                    ans=max(ans,S-(*it).first);
                    break;
            }
        }*/
        //(ans = max(ans, S - *s.begin()); ///ans=3
        for(int j=i-a+1;j>=i-b+1;j--)
        ma[i]=S;
    }
    cout << ans << endl;
}
int main()
{
    nxn
    xuly();
    return 0;
}
