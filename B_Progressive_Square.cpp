#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, c, d;

    cin >> n >> c >> d;

    vector<int> a(n * n);

    for (int i = 0; i < n*n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> v(n * n);

    v[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] + c;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i * n + j] = v[(i - 1) * n + j] + d;
        }
    }

    sort(v.begin(), v.end());

    if (a == v)
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