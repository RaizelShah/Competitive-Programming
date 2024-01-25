#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int H, M;
    cin >> H >> M;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        mp[h * 60 + m]++;
    }

    int t = 0;
    while (!mp[(H * 60 + M + t) % (60 * 24)])
    {
        t++;
    }

    t = t % (60 * 24);
    cout << t / 60 << " " << t % 60 << endl;
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