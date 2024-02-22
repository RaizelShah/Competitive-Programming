#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int inc = 0;
        int dec = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                inc++;
            else
            {
                dec += (v[i]-1);
            }
        }
        if (inc <= dec)
            cout << "YES" << endl;
        else if (inc>dec)
            cout << "NO" << endl;
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