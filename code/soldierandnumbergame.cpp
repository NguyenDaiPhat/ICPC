#include<bits/stdc++.h>
using namespace std;
#define MAX 5000000
#define LEN 348513
bool a[MAX+9];
vector<int> b;
void sangnt()
{
    a[0]=true;a[1]=true;
    for(int i=2;i*i<=MAX;i++)
        if(!a[i])
            for(int j=i*i;j<=MAX;j+=i)a[j]=true;
    for(int i=0;i<=5000000;i++)if(!a[i])b.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    sangnt();
    int q;
    cin>>q;
    while(q--){
        int x,y,tong=0,mu,tong1=0;
        cin>>x>>y;
        for(int i=0;i<=LEN-1;i++)
        {
            if(b[i]<=y){
                    mu=1;
                    while(x/pow(b[i],mu))tong+=x/pow(b[i],mu),mu++;
                    mu=1;
                    while(y/pow(b[i],mu))tong1+=y/pow(b[i],mu),mu++;
            }
            if(b[i]>y&&b[i]<=x){
                mu=1;
                while(x/pow(b[i],mu))tong+=x/pow(b[i],mu),mu++;
            }
            if(b[i]>x){cout<<tong-tong1<<"\n";break;}
        }
    }
    return 0;
}
