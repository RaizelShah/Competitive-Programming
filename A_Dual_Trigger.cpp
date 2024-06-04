#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int t, n;
    string s;
    int a, b;
    a = 0, b = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a++;
            if (i != (n - 1) && s[i + 1] == '1')
                b++;
        }
    }
    if (a == 2 && b > 0)
        cout << "NO" << endl;
    else if (a % 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
