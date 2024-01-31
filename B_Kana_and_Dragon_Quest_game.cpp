#include <bits/stdc++.h>
#define int double
using namespace std;
void solve()
{
    int h, n, m;
    cin >> h >> n >> m;

    while (floor(h / 2) + 10 < h && n != 0)
    {
        h = floor(h / 2) + 10;
        n = n - 1;
    }

    h = h - m * 10;

    if (h <= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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