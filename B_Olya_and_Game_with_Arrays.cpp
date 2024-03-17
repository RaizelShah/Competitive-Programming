#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int ans = 1e9;

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

            ans = min(ans, x);
        }
    }

    int pos;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == ans)
                pos = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        if (i != pos)
        {
            ans += v[i][1];
        }
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