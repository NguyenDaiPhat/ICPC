#include<bits/stdc++.h>
using namespace std;
int b[20009][20009]={}, a[200009];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i][i]=a[i];
    }
    int max1=*max_element(a,a+n);
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    {
        b[i][j]=b[j][j]+b[i][j-1];
        max1=max(max1,b[i][j]);
    }
    cout<<max1;
    return 0;
}
