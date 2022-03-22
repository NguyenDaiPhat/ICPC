#include <bits/stdc++.h>
using namespace std;
int N, a, b;
int x;
long long S = 0;
set<long long> s;
void xuly()
{
    cin >> N;
    s.insert(0);
    long long ans = LLONG_MIN;
    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        S += x;
        ans = max(ans, S - *s.begin()); ///ans=3
        s.insert(S);
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    xuly();
    return 0;
}
