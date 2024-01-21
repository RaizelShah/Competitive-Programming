#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum;

    sum = (k * (w * (w + 1))) / 2;
    if (sum - n >= 0)
    {
        cout << sum - n << endl;
    }
    else
        cout << 0 << endl;
}
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}