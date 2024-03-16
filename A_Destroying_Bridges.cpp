#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    if (k >= (n - 1))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << endl;
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