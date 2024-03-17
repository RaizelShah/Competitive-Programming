#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int mn1 = 1e9, mn2=1e9;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        mn2 = min(v[i][1], mn2);
        mn1 = min(v[i][0], mn1);
    }
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i][1] == mn2 and count == 0)
        {
            count++;
        }
        else
        {
            ans += v[i][1];
        }
    }
    ans += mn1;
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