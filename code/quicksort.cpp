#include<bits/stdc++.h>
using namespace std;
void qs(int p, int r, int *a)
{
    if(p<r){
        int i=p;
        for(int j=p;j<r;j++)
        if(a[j]<a[r]){swap(a[i],a[j]);i++;}
        swap(a[i],a[r]);
        qs(p,i-1,a);
        qs(i+1,r,a);
    }
}
int main()
{
    int a[10]={1,5,2,4,6,2,7};
    qs(0,7,a);
    for(int i=0;i<7;i++)cout<<a[i]<<" ";
    return 0;
}

