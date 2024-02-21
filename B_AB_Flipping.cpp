#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            ans--;
        else
            break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
            ans--;
        else
            break;
    }
    if (ans >= 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
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