#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    // if ((p1 + p2 + p3) % 2 != 0)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // else if (p1 == 0 && p1 == p2 && p2 == p3)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // else if (p1 % 2 == 0 && p1 == p2 && p2 == p3)
    // {
    //     cout << (p1 + p2 + p3) / 2 << endl;
    //     return;
    // }

    // vector<int> v;
    // v.push_back(p1);
    // v.push_back(p2);
    // v.push_back(p3);

    // sort(v.begin(), v.end());
    // if (v[0] == 0)
    // {
    //     cout << min(v[1], v[2]) << endl;
    // }
    // else
    // {
    //     cout << v[0] * 2 << endl;
    // }

    int sum = p1 + p2 + p3;

    if (sum % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << min(sum / 2, p1 + p2) << endl;
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