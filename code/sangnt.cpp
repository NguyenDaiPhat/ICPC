#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 ///10^7
bool a[MAX+9];
void sangnt()
{
    a[0]=true;a[1]=true;
    for(int i=2;i*i<=MAX;i++)
        if(!a[i])
            for(int j=i*i;j<=MAX;j+=i)a[j]=true;
}
int main()
{
    sangnt();
    int dem=0;
    for(int i=1;i<=5000000;i++)if(!a[i])dem++;
    cout<<dem;
    return 0;
}
