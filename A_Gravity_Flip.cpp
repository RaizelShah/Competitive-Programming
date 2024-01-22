#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    int k;
    cin>>n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";
}
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}