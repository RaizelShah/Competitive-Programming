#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[abs(x)] += a[i];
    }

    int f = 1, rem = 0;

    for (int i = 1; i <= n; i++)
    {
        rem += k;
        if (rem < b[i])
            f = 0;
        else
            rem -= b[i];
    }

    if (f)
        cout << "YES" << endl;
    else
        cout<<"NO"<<endl;
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
