#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m, a;
    cin >> n >> m >> a;

    int x = (m + a - 1) / a;
    int y = (n + a - 1) / a;

    cout << x * y << endl;
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