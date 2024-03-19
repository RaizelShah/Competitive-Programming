#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int curr = 0;

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = i; j <= n; j *= 2)
        {
            v[curr++] = j;
        }
    }

    for (auto it : v)
        cout << it << " ";
    cout << endl;
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