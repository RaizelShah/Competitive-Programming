#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, d, k;
    cin >> n >> d;
    int sum=0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
        sum += v[i];
    }

    if (sum + 10 * (n - 1) > d)
        cout << -1 << endl;
    else
        cout << (d - sum) / 5 << endl;
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