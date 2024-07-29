#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int len = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= q)
        {
            len++;
        }
        else
        {
            if (len >= k)
            {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }

    if (len >= k)
    {
        ans += (len - k + 1) * (len - k + 2) / 2;
    }

    cout << ans << endl;
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