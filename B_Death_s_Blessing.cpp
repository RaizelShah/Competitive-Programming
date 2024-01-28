#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n;

    vector<int> v1, v2;
    vector<pair<int, int>> v;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v1.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back({v2[i], v1[i]});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        v[i + 1].second += v[i].first;
        sum += v[i].second;
    }
    // cout<<sum<<endl;
    for(auto it: v)
    cout<<it.first<<" "<<it.second;
    cout<<endl;
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