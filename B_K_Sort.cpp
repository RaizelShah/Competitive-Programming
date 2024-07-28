#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> p(n, 0);

    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            p[i] = v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }

    cout << sum + *max_element(p.begin(), p.end()) << endl;

    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
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