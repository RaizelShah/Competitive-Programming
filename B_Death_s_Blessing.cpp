#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n;

    vector<int> v1, v2;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
        sum += v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v2.push_back(b);
        sum += v2[i];
    }

    int max = *max_element(v2.begin(), v2.end());

    cout << sum - max << endl;
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