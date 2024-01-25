#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    while (n % 2020 != 0)
    {
        if (n % 2021 == 0)
        {
            cout << "YES" << endl;
            return;
        }

        n -= 2021;

        if (n < 2020)
        {
            cout << "NO" << endl;
            return;
        }
    }
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