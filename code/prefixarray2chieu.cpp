#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;///n m hang cot
    int a[n+1][m+1],pre[n+1][m+1];
    memset(pre,0,sizeof(pre));
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>a[i][j];
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        pre[i][j]=pre[i-1][j]+pre[i][j-1]+a[i][j]-pre[i-1][j-1];
    }
    int q;
    cin>>q;///q truy van
    while(q--){
        int h1,h2,c1,c2;///h1 h2 c1 c2 la hang va cot cua hcn can tinh tong
        cin>>h1>>h2>>c1>>c2;
        cout<<pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1]<<endl;
    }
    return 0;
}
