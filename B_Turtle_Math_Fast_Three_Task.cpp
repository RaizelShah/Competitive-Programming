#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
        sum += k;
    }
    if (sum % 3 == 0)
    {
        cout<<0<<endl;
        return;
    }
    if (sum % 3 == 2)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int x = sum - v[i];
        if (x % 3 == 0)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
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