#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        cout << 1 << " " << 3 << " ";
        for (int i = 0; i < n - 2; i++)
            cout << 2 << " ";
        cout << endl;
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