#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int ctr2 = 0, ctr3 = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        ctr2++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        ctr3++;
    }

    if (n == 1 && ctr2 <= ctr3)
        cout << (ctr3 - ctr2) + ctr3 << endl;
    else
        cout << -1 << endl;
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