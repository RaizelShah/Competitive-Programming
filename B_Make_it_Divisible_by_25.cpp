#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int l = s.size();
    int ans = l;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (num % 25 == 0)
            {
                ans = min(ans, (j - i - 1) + (l - 1 - j));
            }
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