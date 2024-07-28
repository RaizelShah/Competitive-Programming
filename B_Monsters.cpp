#include <bits/stdc++.h>
#define int long long
using namespace std;
pair<int, int> num[300005];
void solve()
{
    int n, k, a;

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        num[i] = {-1 - (a - 1) % k, i};
    }
    sort(num + 1, num + n + 1);
    for (int i = 1; i <= n; i++)
    {
        cout << num[i].second << ' ';
    }
    cout << endl;
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