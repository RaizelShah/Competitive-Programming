#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }

    cout << a << " " << n - a << "\n";
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