#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int i, j, k, n, m, t, a[100500], b[100500], res;
    map<int, int> mp;
    cin >> n >> m;
    res = m;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        cin >> b[i];
        mp[b[i]] += a[i];
    }
    n--;
    for (auto [x, y] : mp)
    {
        k = min(y, n);
        n -= k;
        res += min(m, x) * k;
    }
    cout << res << '\n';
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}