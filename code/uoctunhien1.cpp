#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int sum[MAX+9]{},cnt[MAX+9]{};
long long pre1[MAX+9]{},pre2[MAX+9]{};
void xuly()
{
    for(int i=1;i<=MAX;i++){
        for(int j=i;j<=MAX;j+=i){
                sum[j]+=i;
                cnt[j]++;
        }
        pre1[i]=pre1[i-1]+cnt[i];
        pre2[i]=pre2[i-1]+sum[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    xuly();
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<pre1[y]-pre1[x-1]<<" "<<pre2[y]-pre2[x-1]<<'\n';
    }
    return 0;
}
