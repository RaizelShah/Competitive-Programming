#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n;
    int max = 1;
    vector<int> m;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr[i] = k;
    }
    if (n == 1)
    {
        m.push_back(max);
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                max++;
            }
            else
            {
                m.push_back(max);
                max = 1;
            }
            m.push_back(max);
        }
    }

    sort(m.begin(), m.end());

    cout << *max_element(m.begin(), m.end()) << endl;
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