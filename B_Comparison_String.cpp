#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ctr = 1, cur = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            cur = 1;
        }
        else
        {
            cur++;
        }

        ctr = max(ctr, cur);
    }

    cout << ctr + 1 << endl;
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