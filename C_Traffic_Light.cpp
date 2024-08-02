#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    int first = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
        {
            first = i;
            break;
        }
    }

    int last = first + n;
    int ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
        {
            last = i;
        }
        else if (s[i] == c)
        {
            ans = max(ans, last - i);
        }
    }

    cout << ans << "\n";
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