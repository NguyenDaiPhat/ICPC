#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 ///10^7
bool a[MAX+9];
void sangnt()
{
    memset(a,1,sizeof(a));
    a[0]=false;a[1]=false;
    for(int i=2;i*i<=MAX;i++)
        if(a[i])
            for(int j=i*i;j<=MAX;j+=i)a[j]=false;
}
void dequy(string s,int &d)
{
    int n=s.find("?");                 ///1??1  n=1; 10?1 11?1... 19?1
    if(n==(-1) && a[stoi(s)]){               /// 10?1  n=2  1001 ... 1091
            d++;return;
    }
    while(n!=-1)
    {
        for(char i='0';i<='9';i++)
        {
            if(n==0 && i=='0')i++;
            s[n]=i;
            dequy(s,d);
            if(i=='9')return ;
        }
    }
}
int main()
{
    int d=0;
    string s;
    cin>>s;
    sangnt();
    dequy(s,d);
    cout<<d;
    return 0;
}
