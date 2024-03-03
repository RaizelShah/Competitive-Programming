#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int l;

    set<int> s1;
    set<int> s2;

    for (int i = 0; i < n; i++)
    {

        cin >> l;
        if (l <= k)
            s1.insert(l);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        if (l <= k)
            s2.insert(l);
    }

    if (s1.size() < (k / 2) || s2.size() < (k / 2))
    {
        cout << "NO" << endl;
    }
    else
    {
        int flag = 1;
        set<int> s;
        for (auto it : s1)
        {
            s.insert(it);
        }
        for (auto it : s2)
        {
            s.insert(it);
        }
        for (int i = 1; i <= k; i++)
        {
            if (s.find(i) == s.end())
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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