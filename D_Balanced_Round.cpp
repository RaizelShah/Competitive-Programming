#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> v;
    int ctr = 1;
    int ans = 1;

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > d)
        {
            ctr = 1;
        }
        else
        {
            ctr++;
        }
        ans = max(ans, ctr);
    }

    cout << n - ans << endl;
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