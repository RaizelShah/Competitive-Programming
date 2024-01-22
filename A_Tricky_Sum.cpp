#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i & (i - 1) != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }

    cout << sum << endl;
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