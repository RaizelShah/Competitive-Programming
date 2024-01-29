#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int k;
    int ctr = 0;
    int sum=0;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }

    for (int i = 0; i < n; i++)
    {
        while (v[i] != 1 && v[i] % 2 == 0)
        {
            v[i] = v[i] / 2;
            ctr++;
        }
    }

    sort(v.begin(), v.end());
    v[n - 1] = v[n - 1] * pow(2, ctr);

    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }

    cout<<sum<<endl;
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