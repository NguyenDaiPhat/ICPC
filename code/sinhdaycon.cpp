#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4};
    for(int i=0;i<(1<<4);i++){
        cout<<"{ ";
        for(int j=0;j<4;j++){
            if(i & (1 << j)){
                cout<< a[j]<< " ";
            }
        }
        cout<<"}\n";
    }
    return 0;
}


