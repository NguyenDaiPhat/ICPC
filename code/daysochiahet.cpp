#include<bits/stdc++.h>
using namespace std;
///day so lien tiep dai nhat chia het cho k
int a[10009];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){cin>>a[i];}
    int max1=0;
    for(int i=0;i<n;i++)
    {
        long long tong=0;
        for(int j=i;j<n;j++)
        {
            tong+=a[j];
            if(tong%k==0)//max1=max(max1,i-j+1);
                {if(j-i+1>max1)max1=j-i+1;}

        }
    }
    cout<<max1;
    //for(int i=0;i<n;i++)cout<<a[i];
    return 0;
}

