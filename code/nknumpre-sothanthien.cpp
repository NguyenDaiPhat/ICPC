#include <bits/stdc++.h>
using namespace std;
int rev(int x) {
	int ans = 0;
	while (x > 0) {
		ans = ans*10 + x%10;
		x /= 10;
	}
	return ans;
}
int main()
{
    int a, b, res=0;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if (__gcd(i, rev(i)) == 1) res++;
	}
	cout << res << endl;
	return 0;
}
