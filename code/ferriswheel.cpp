#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;

    cin>>n>>x;
    vector<int> a;
    for (int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);

    }
    sort(a.begin(),a.end());
    int ii=0,jj=n-1,ans=0;
    while (ii<jj)
    {

        if (a[ii]+a[jj]<=x)
        {
            ii++;
            jj--;
            ans++;

        }
        else
        {
            if (a[ii]+a[jj]>x)
            {


                ans++;
                jj--;
            }
        }
        if (ii==jj)
        {
            ans++;
            break;
        }

    }
    cout<<ans<<endl;


}
