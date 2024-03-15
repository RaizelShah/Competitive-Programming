#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (k != 4)
    {
        int ans = 10;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, ((arr[i] + k - 1) / k) * k - arr[i]);
        }

        cout << ans << endl;
    }
    else
    {
        int ans = 10;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, ((arr[i] + k - 1) / k) * k - arr[i]);
            cnt = cnt + (arr[i] % 2 == 0);
        }

        cnt = min(cnt, (int)2);
        ans = min(ans, 2 - cnt);
        cout << ans << endl;
    }
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