#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int l, n;
    cin >> l >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;
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