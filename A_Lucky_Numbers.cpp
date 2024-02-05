#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int l, r;
    cin >> l >> r;

    int max = 0, ans = l;

    for (int i = l; i <= r; i++)
    {
        string num = to_string(i);
        sort(num.begin(), num.end());

        int curr = num[num.length() - 1] - num[0];

        if (curr > max)
        {
            max = curr;
            ans = i;
        }

        if (max == 9)
            break;
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