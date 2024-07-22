#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (n == 1 || m == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        int x = n / m;

        if (n % m != 0)
        {
            x++;
        }

        int q = n - x;

        if (k >= q)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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