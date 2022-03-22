#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;cin>>q;
    while(q--){
        long long k,i,kq,tong=0;
        cin>>k;
        for(i=0;i<=1e18;i++)
        {
            if(k<=tong+(i+1)*9*pow(10,i))break;
            tong+=(i+1)*9*pow(10,i);
        }
        cout<<tong<<" "<<i<<"\n";
        tong=189, i=2
        long long m=k-tong; m=1
        //cout<<m<<"\n";
        if(m%(i+1)==0){
            kq=tong+m/(i+1);
            string s=to_string(kq);
            //cout<<s.back()<<"\n";
        }
        else{
            kq=tong+m/(i+1)+1;
            string s=to_string(kq);
            //cout<<s[m%(i+1)-1]<<"\n";
        }
    }
    return 0;
}
