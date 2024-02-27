// Test case 2 failed
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> vo;
    vector<int> ve;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            ve.push_back(v[i]);
        else
            vo.push_back(v[i]);
    }
    sort(ve.begin(), ve.end());
    sort(vo.begin(), vo.end());
    int x;
    if (vo.size() == 0)
    {
        x = ve[0];
        for (int i = 1; i < ve.size(); i++)
        {
            x = x % ve[i];
        }
        if (x == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
    {
        x = vo[0];
        for (int i = 1; i < vo.size(); i++)
        {
            x = x % vo[i];
        }
        for (int i = 0; i < ve.size(); i++)
        {
            x = x % ve[i];
        }
        // cout<<x<<endl;

        // cout<<x<<endl;
        if (x == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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