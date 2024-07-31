#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v1(n + 1), v2(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> v2[i];
    }

    vector<int> fv1(2 * n + 1);
    vector<int> fv2(2 * n + 1);
    int p = 1;

    for (int i = 2; i <= n; i++)
    {
        if (v1[i] != v1[i - 1])
        {
            fv1[v1[i - 1]] = max(fv1[v1[i - 1]], i - p);
            p = i;
        }
    }
    fv1[v1[n]] = max(fv1[v1[n]], n - p + 1);

    p = 1;

    for (int i = 2; i <= n; i++)
    {
        if (v2[i] != v2[i - 1])
        {
            fv2[v2[i - 1]] = max(fv2[v2[i - 1]], i - p);
            p = i;
        }
    }
    fv2[v2[n]] = max(fv2[v2[n]], n - p + 1);

    int ans = 0;
    for (int i = 1; i <= n + n; ++i)
    {
        ans = max(ans, fv1[i] + fv2[i]);
    }

    cout << ans << '\n';
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