#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    deque<int> de;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<k;i++){
        while(!de.empty() && a[i]>a[de.back()]){
            de.pop_back();
        }
        de.push_back(i);
    }
    cout<<a[de.front()]<<" ";
    for(int i=k;i<n;i++){
        if(de.front()<=(i-k))de.pop_front();
        while(!de.empty() && a[i]>a[de.back()]){
            de.pop_back();
        }
        de.push_back(i);
        cout<<a[de.front()]<<" ";
    }
    return 0;
}
