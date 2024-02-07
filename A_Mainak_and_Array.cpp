#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int ans = -10000;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[(i - 1 + n) % n] - arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        ans = max(ans, arr[i] - arr[0]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, arr[n - 1] - arr[i]);
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